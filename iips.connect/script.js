const root = document.documentElement;
try {
  root.setAttribute("data-theme", localStorage.getItem("theme") || "light");
} catch {
  root.setAttribute("data-theme", "light");
}

document.addEventListener("DOMContentLoaded", () => {
  const themeButton = document.getElementById("themeBtn");
  const updateThemeButton = () => {
    const dark = root.getAttribute("data-theme") === "dark";
    if (themeButton) {
      themeButton.textContent = dark ? "☀" : "◐";
      themeButton.setAttribute(
        "aria-label",
        dark ? "Switch to light theme" : "Switch to dark theme",
      );
      themeButton.title = dark
        ? "Switch to light theme"
        : "Switch to dark theme";
    }
  };
  updateThemeButton();
  themeButton?.addEventListener("click", () => {
    const theme = root.getAttribute("data-theme") === "dark" ? "light" : "dark";
    root.setAttribute("data-theme", theme);
    try {
      localStorage.setItem("theme", theme);
    } catch {}
    updateThemeButton();
  });

  const sectionNavLinks = [...document.querySelectorAll('.photo-nav-links a[href^="#"]')];
  const pageSections = sectionNavLinks
    .map((link) => document.querySelector(link.getAttribute("href")))
    .filter(Boolean);
  let navUpdatePending = false;
  const updateSectionNav = () => {
    navUpdatePending = false;
    const threshold = 130;
    const activeSection = [...pageSections]
      .filter((section) => section.getBoundingClientRect().top <= threshold)
      .at(-1) || pageSections[0];
    sectionNavLinks.forEach((link) => {
      const active = link.hash === `#${activeSection?.id}`;
      if (active) link.setAttribute("aria-current", "location");
      else link.removeAttribute("aria-current");
    });
  };
  window.addEventListener("scroll", () => {
    if (navUpdatePending) return;
    navUpdatePending = true;
    window.requestAnimationFrame(updateSectionNav);
  }, { passive: true });
  updateSectionNav();

  document.querySelectorAll("[data-carousel]").forEach((carousel) => {
    const slides = [...carousel.querySelectorAll(".about-slide")];
    const dots = [...carousel.querySelectorAll("[data-carousel-dot]")];
    if (slides.length < 2) return;
    let activeIndex = 0;
    const showSlide = (index) => {
      activeIndex = (index + slides.length) % slides.length;
      slides.forEach((slide, slideIndex) => {
        const active = slideIndex === activeIndex;
        slide.classList.toggle("is-active", active);
        slide.setAttribute("aria-hidden", String(!active));
        slide.toggleAttribute("inert", !active);
      });
      dots.forEach((dot, dotIndex) => {
        dot.setAttribute("aria-current", String(dotIndex === activeIndex));
      });
    };
    carousel.querySelector("[data-carousel-prev]")?.addEventListener("click", () => {
      showSlide(activeIndex - 1);
    });
    carousel.querySelector("[data-carousel-next]")?.addEventListener("click", () => {
      showSlide(activeIndex + 1);
    });
    dots.forEach((dot) => {
      dot.addEventListener("click", () => showSlide(Number(dot.dataset.carouselDot)));
    });
    carousel.addEventListener("keydown", (event) => {
      if (event.key === "ArrowLeft") showSlide(activeIndex - 1);
      if (event.key === "ArrowRight") showSlide(activeIndex + 1);
    });
  });

  const currentPage = decodeURIComponent(
    location.pathname.split("/").pop() || "index (1).html",
  );
  document.querySelectorAll(".site-nav a").forEach((link) => {
    if (decodeURIComponent(link.getAttribute("href")) === currentPage) {
      link.classList.add("active");
      link.setAttribute("aria-current", "page");
    }
  });

  const menuButton = document.getElementById("menuBtn");
  const nav = document.getElementById("siteNav");
  menuButton?.addEventListener("click", () => {
    const open = nav.classList.toggle("open");
    menuButton.setAttribute("aria-expanded", String(open));
    menuButton.setAttribute(
      "aria-label",
      open ? "Close navigation" : "Open navigation",
    );
    menuButton.textContent = open ? "×" : "☰";
  });

  const campusFlip = document.getElementById("campusFlip");
  campusFlip?.addEventListener("click", () => {
    const flipped = campusFlip.classList.toggle("is-flipped");
    campusFlip.setAttribute("aria-pressed", String(flipped));
  });

  document.querySelectorAll("[data-event-save]").forEach((button) => {
    const eventId = button.dataset.eventSave;
    const storageKey = `saved-event-${eventId}`;
    const saveLabel = button.dataset.saveLabel || "Save event";
    const savedLabel = button.dataset.savedLabel || "Saved ✓";
    const updateSaveButton = (saved) => {
      button.setAttribute("aria-pressed", String(saved));
      button.textContent = saved ? savedLabel : saveLabel;
    };
    let saved = false;
    try {
      saved = localStorage.getItem(storageKey) === "true";
    } catch {}
    updateSaveButton(saved);
    button.addEventListener("click", () => {
      saved = !saved;
      try {
        localStorage.setItem(storageKey, String(saved));
      } catch {}
      updateSaveButton(saved);
    });
  });

  const search = document.getElementById("siteSearch");
  const results = document.getElementById("searchResults");
  const pages = [
    {
      href: "index (1).html",
      title: "Home",
      detail: "Campus overview and quick links",
      keywords: "campus iips davv",
    },
    {
      href: "dashboard.html",
      title: "Dashboard",
      detail: "Attendance, courses and campus stats",
      keywords: "attendance courses stats overview",
    },
    {
      href: "timetable.html",
      title: "Smart timetable",
      detail: "Weekly classes by day and time",
      keywords: "class schedule day time subject",
    },
    {
      href: "placement.html",
      title: "Placement record",
      detail: "Companies, packages and students placed",
      keywords: "career company package jobs placement",
    },
    {
      href: "workshop.html",
      title: "Workshops & events",
      detail: "Upcoming campus sessions",
      keywords: "event workshop seminar",
    },
  ];
  const hideResults = () => {
    if (!results) return;
    results.hidden = true;
    results.replaceChildren();
  };
  search?.addEventListener("input", () => {
    const query = search.value.trim().toLowerCase();
    results.replaceChildren();
    if (!query) {
      hideResults();
      return;
    }
    const matches = pages.filter((page) =>
      `${page.title} ${page.detail} ${page.keywords}`
        .toLowerCase()
        .includes(query),
    );
    if (matches.length) {
      matches.forEach((page) => {
        const link = document.createElement("a");
        link.href = page.href;
        link.innerHTML = `<strong>${page.title}</strong><small>${page.detail}</small>`;
        results.append(link);
      });
    } else {
      const empty = document.createElement("a");
      empty.href = "index (1).html";
      empty.textContent = "No matching section — return home";
      results.append(empty);
    }
    results.hidden = false;
  });
  document.addEventListener("click", (event) => {
    if (!event.target.closest(".search-wrap")) hideResults();
  });
  document.addEventListener("keydown", (event) => {
    if (event.key === "Escape") {
      hideResults();
      search?.blur();
    }
  });

  const today = document.getElementById("today");
  if (today)
    today.textContent = new Date().toLocaleDateString("en-IN", {
      weekday: "long",
      day: "numeric",
      month: "long",
      year: "numeric",
    });
});
