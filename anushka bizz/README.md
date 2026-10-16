# Dilip Watch Company & Electronics

A responsive retail showcase for a long-standing Indore business. Built as a static, dependency-free website so it can be previewed directly or hosted on any static web host.

## Run locally

Open `index.html` in a browser, or serve the folder with any static HTTP server (for example, `python -m http.server 8000`) and visit `http://localhost:8000`.

## Project structure

- `index.html` — semantic page shell, metadata, navigation and footer.
- `styles.css` — responsive visual system, components and reduced-motion support.
- `app.js` — centralized configuration, demonstration product data, route rendering, translations and interactions.

## Updating products

Edit `PRODUCTS` in `app.js`. Each product has an ID, name, supported category, description, image, and specifications. Valid category IDs are `watches`, `perfumes`, `bags`, and `wall-clocks`. Product prices are intentionally unset; cards display “Enquire in Store.” Replace the clearly marked demonstration names, descriptions and imagery with verified inventory before presenting those as stocked products.

## Business details to add

Edit `CONFIG` at the top of `app.js` to add the verified WhatsApp number (international digits only, no plus sign), telephone number, or update showroom location descriptions. WhatsApp and call actions gracefully route to contact or remain disabled while those details are missing. Showroom directions use Google Maps search based on the supplied location text.

## Backend readiness

The contact form validates fields in the browser but does not send or store enquiries. Connect it to a backend or form provider before enabling submission. Product, showroom, category and translation content are kept as structured JavaScript data for a future API/CMS integration. No database, CMS, analytics, email service or inventory feed is configured.

Images and web fonts are loaded from external providers and require an internet connection. Replace external image URLs with approved, optimized business photography when available.
