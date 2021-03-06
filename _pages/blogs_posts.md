---
title: "Check out my Posts!"
permalink: /posts/
layout: collection
author_profile: true
---

<div class="grid__wrapper">
  {% for post in site.posts %}
    {% include archive-single.html %}
  {% endfor %}
</div>
