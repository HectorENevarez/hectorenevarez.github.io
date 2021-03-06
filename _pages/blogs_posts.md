---
title: "Check out my Posts!"
permalink: /posts/
layout: collection
author_profile: true
---

<div class="grid__wrapper">
  {% for post in site.posts limit:1 %}
    {% include archive-single.html type="grid" %}
  {% endfor %}
</div>
