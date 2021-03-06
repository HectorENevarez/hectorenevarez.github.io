---
title: "Check out my Posts!"
permalink: /posts/
layout: collection
author_profile: true
---

<div class="grid__wrapper">
  {% for post in site.posts %}
    {% if post.header.teaser %}
      {% capture teaser %}{{ post.header.teaser }}{% endcapture %}
    {% else %}
      {% assign teaser = site.teaser %}
    {% endif %}
    {% include archive-single.html %}
  {% endfor %}
</div>
