---
# You don't need to edit this file, it's empty on purpose.
# Edit theme's home layout instead if you wanna make some changes
# See: https://jekyllrb.com/docs/themes/#overriding-theme-defaults
layout: collection
author_profile: true
classes: wide
collection: portfolio
entries_layout: grid
title: About Me
---

**Hello!** My name is Hector and I am currently a third year student studying computer science at San Diego State University. I enjoy learning and I have found that the best way to learn something new is by teaching it. I apply this principle by giving [weekly workshops](https://hectorenevarez.github.io/workshops/) through [SDSU's AI Club](https://aiclub.sdsu.edu/). Every day I push myself to learn something new, whether that be about machine learning, software engineering, or a random interesting fact.

# Recent Posts
<div class="grid__wrapper">
  {% for post in site.posts limit:5 %}
    {% include archive-single.html type="grid" %}
  {% endfor %}
</div>
