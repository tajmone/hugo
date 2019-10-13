# Hugo Interactive Fiction System

Hugo (1995–2006) by [Kent Tessman], [BSD 2-Clause License]:

- https://www.generalcoffee.com/hugo

This repository contains [Tristano Ajmone]’s custom fork of [Dannii Willis]’s [Hugo repository].

- https://github.com/tajmone/hugo
- https://github.com/curiousdannii/hugo

-----

**Table of Contents**

<!-- MarkdownTOC autolink="true" bracket="round" autoanchor="false" lowercase="only_ascii" uri_encoding="true" levels="1,2,3" -->

- [About This Project](#about-this-project)
    - [Hugo Active Development \(1995–2006\)](#hugo-active-development-1995%E2%80%932006)
    - [The Upstream Void \(2006–\)](#the-upstream-void-2006%E2%80%93)
    - [Third Party Git Revival \(2008, 2012\)](#third-party-git-revival-2008-2012)
    - [This Repository \(2019\)](#this-repository-2019)
        - [Changes](#changes)
        - [Custom Branches](#custom-branches)
        - [Upstream Branches](#upstream-branches)
- [About Hugo](#about-hugo)
    - [Multimedia Support](#multimedia-support)
- [License](#license)
- [External Links](#external-links)

<!-- /MarkdownTOC -->

-----

# About This Project

In order to better understand the role of this repository, I'll provide here some historical background on Hugo development and distribution history.

## Hugo Active Development (1995–2006)

Historically, Hugo binaries and sources were distributed on the Hugo website as platform-specific downloadable archives.
Beside the main Hugo releases created by [Kent Tessman], third party ports to various OSs where also available for download.

## The Upstream Void (2006–)

When active development of Hugo ceased around 2006, the IF Archive became the main reference for Hugo official releases and third party updates and ports, and all downloads links on the Hugo website now redirect to the IF Archive.

Although the Hugo website is still on-line, it's no longer being updated.
The Hugo website hosts a [Subversion repository of Hugo sources], but it's not open to third party contributions, and it hasn't been updated since 2014.

With the IF Archive being the only place of reference left for Hugo downloads and uploads, there's no longer an official upstream repository for version-controlled Hugo development.

## Third Party Git Revival (2008, 2012)

In an attempt to fill this «upstream void», two Git repositories for Hugo sources were created by members of the IF community:

- [curiousdannii/hugo] — GitHub (2008), by [Dannii Willis].
- [0branch/hugo-unix] — Bitbucket (2012), by [Marc Simpson].

The [curiousdannii/hugo] repository is an attempt to gather under one roof all the different Hugo editions.
From the [curiousdannii/hugo README]:

> In this repository I have tried to collect together all the various versions of the Hugo source code I could find.
> I don't know the codebase well enough to commit to maintaining the code, but patches and pull requests are very welcome.

For more info on these two upstream repositories, see the discussion on [curiousdannii/hugo#4].

The [0branch/hugo-unix] repository focuses on the Unix port of Hugo, by Bill Lash (and updated by [Kent Tessman]).

## This Repository (2019)

The main reason why I created this fork of Danniis's Hugo repository [was to provide a freely-editable public Wiki on Hugo] — now available at [Hugo Wiki].
But then, having forked the upstream repository, I decided I might just as well maintain my own custom Hugo codebase, while still keeping a connection with its upstream in order to integrate updates and be able to contribute to it.

Right now, my edits to the `master` branch are mainly focused on cleaning up the repository from unneeded left overs, tweaking its settings to my custom workflow and tools of choice, and trying to document what's here, how to build Hugo for different platforms, and how the codebase evolved since the last official Hugo releases.

My main focus of interest is on building Hugo for Windows, possibly via MSYS2.

### Changes

I've enforced consistent coding styles on the various project files via [EditorConfig] settings.

The added [`.editorconfig`][.ec] file should be picked automatically by most modern editors ([either natively or via plug-ins]), which means end users won't have to worry about handling details like tab settings, trimming trailing spaces and adding an empty line at the end of files.

Furthermore, these settings can be employed to validate commits and pull requests via continuous integration services, using third party tools like [ECLint].

Many of the C sources displayed inconsistent use of tabs and spaces for indentation — the original Hugo code has been handled by various users in these years, which lead to a proliferation of different indentation standards in the code base.
After comparing the original Hugo distribution sources to the files in this project, I settled on arbitrarily enforcing indentation using spaces (tab width = 3 spaces), and manually amended all stray indentation and extra whitespace until the whole code base passed a test-run against [EClint].

This is an opinionated choice, which might make someone unhappy, but enforcing a coding standard is better than having none.
The same goes for other file extensions which are covered in the  [`.editorconfig`][.ec] settings file.
Now, at least, the repository is guaranteed to meet and preserve consistent coding styles across commits.

### Custom Branches

Any branch in this repository that doesn't start with `dannii-` is my own custom branch, diverging from Danniis' upstream repository — therefore, the `master` branch of my repository is not kept in synch with the `master` branch of [curiousdannii/hugo].

### Upstream Branches

In order to keep a clear separation between my own branches and their upstream counterparts, I've prefixed with `dannii-` the name of any branch which mirrors the branches of [curiousdannii/hugo]:

|   on this repository  |    upstream    |                description                 |
|-----------------------|----------------|--------------------------------------------|
| `dannii-master`       | `master`       | Main upstream branch.                      |
| `dannii-emglken`      | `emglken`      |                                            |
| `dannii-emglkenasync` | `emglkenasync` |                                            |
| `dannii-garglk`       | `garglk`       |                                            |
| `dannii-hugo-unix`    | `hugo-unix`    | Unix port by Bill Lash.                    |
| `dannii-hugor`        | `hugor`        | [Modern Hugo terp] by [Nikos Chantziaras]. |
| `dannii-v3.2`         | `v3.2`         |                                            |

I still haven't worked out what most of those upstream branches do, but I'll try to document them as I get more time to explore them.

# About Hugo

Hugo was created and developed (1995–2006) by [Kent Tessman].
It's a cross platform Interactive Fiction system for developing and playing text adventure games, supporting multimedia.

The latest (official) stable release of Hugo is v3.1.03 (2006/01/05).

## Multimedia Support

- images: JPG.
- sounds: MOD, S3M, MP3, MIDI, XM and WAV.
- videos: AVI and MPEG.

# License

- [`LICENSE`][LICENSE]

Hugo is released under the terms of the BSD 2-Clause License (see [license file on Hugo website]).


[license file on Hugo website]: http://develop.generalcoffee.com/hugo/trac/browser/trunk/License.txt

```
BSD 2-Clause License

Copyright (c) 2011 by Kent Tessman
All rights reserved.

Redistribution and use in source and binary forms, with or without
modification, are permitted provided that the following conditions are met:

1. Redistributions of source code must retain the above copyright notice, this
   list of conditions and the following disclaimer.

2. Redistributions in binary form must reproduce the above copyright notice,
   this list of conditions and the following disclaimer in the documentation
   and/or other materials provided with the distribution.

THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE
FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
```

# External Links

- [Hugo website]:
    + [Beta packages archive]  (latest: Hugo v3.1.03, 2005/01/05)
    + [Old versions archive]
- [Hugo SVN repository]  (last updated in 2014)
- [IF Archive » Hugo]
    + _[The Hugo Book]_ (PDF) — for Hugo v3.1, by [Kent Tessman], 2004.

For more information on Hugo:

- [Hugo Wiki]  (on this repository)
- [IFWiki » Hugo]
- [IFWiki » Hugo Tutorials]
- [Awesome IF » Hugo]
- [Awesome IF website » Hugo]

Hugo repositories:

- [0branch/hugo-unix] — Fork of Bill Lash's original Unix port of Hugo, hosted on Bitbucket by [Marc Simpson].
- [curiousdannii/hugo] — The upstream Hugo repository of this project, by [Dannii Willis].
- [realnc/hugor] — Modern cross platform Hugo interpreter by [Nikos Chantziaras].
- [tajmone/hugo-book] — New AsciiDoc port of _[The Hugo Book]_, by [Tristano Ajmone].

<!-----------------------------------------------------------------------------
                               REFERENCE LINKS
------------------------------------------------------------------------------>

[BSD 2-Clause License]: ./LICENSE "View full text of the BSD 2-Clause License"
[curiousdannii/hugo README]: https://github.com/curiousdannii/hugo/blob/master/README.md "View upstream README file"
[Hugo repository]: https://github.com/curiousdannii/hugo "View upstream repository on GitHub, maintained by Dannii Willis"
[was to provide a freely-editable public Wiki on Hugo]: https://github.com/curiousdannii/hugo/issues/4 "See my request for an open Hugo Wiki at curiousdannii/hugo#4"
[Modern Hugo terp]: https://github.com/realnc/hugor "Visit the Hugor repository on GitHub"
[Subversion repository of Hugo sources]: http://develop.generalcoffee.com/hugo/trac/browser/trunk "Visit the official Hugo SVN repository (frozen)"

<!-- Hugo links official -->

[Hugo SVN repository]: http://develop.generalcoffee.com/hugo/trac/browser/trunk "Visit the official Hugo SVN repository (frozen)"
[Hugo website]: http://www.generalcoffee.com/hugo/gethugo.html "Visit the Hugo website"
[Beta packages archive]: http://www.generalcoffee.com/hugo/beta/ "Visit the archives of Beta Hugo packages at Hugo website"
[Old versions archive]: http://www.generalcoffee.com/hugo/archive/ "Visit the archives of old Hugo packages at Hugo website"

<!-- Hugo links 3rd party -->

[Awesome IF website » Hugo]: https://tajmone.github.io/awesome-interactive-fiction/#hugo "View Hugo entry at the Awesome Interactive Fiction website"
[Awesome IF » Hugo]: https://github.com/tajmone/awesome-interactive-fiction#hugo "View Hugo entry at the Awesome Interactive Fiction repository"
[IF Archive » Hugo]: https://www.ifarchive.org/indexes/if-archive/programming/hugo/ "Visit the IF Archive section on Hugo"
[IFWiki » Hugo Tutorials]: http://ifwiki.org/index.php/Category:Hugo_tutorials "Go to the Hugo tutorials category on IFWiki"
[IFWiki » Hugo]: http://ifwiki.org/index.php/Hugo "Go to the Hugo page on IFWiki"
[The Hugo Book]: http://www.ifarchive.org/if-archive/programming/hugo/manuals/hugo_book.pdf "Download 'The Hugo Book' (PDF) for Hugo v3.1"

<!-- Hugo repos -->

[0branch/hugo-unix]: https://bitbucket.org/0branch/hugo-unix/ "Visit Bill Lash's original Unix port of Hugo on Bitbucket, maintained by Marc Simpson"
[curiousdannii/hugo]: https://github.com/curiousdannii/hugo "Visit the Hugo sources repository on GitHub, maintained by Dannii Willis"
[realnc/hugor]: https://github.com/realnc/hugor "Visit the Hugor repository on GitHub"
[tajmone/hugo-book]: https://github.com/tajmone/hugo-book "Visit 'The Hugo Book' AsciiDoc repository on GitHub, maintained by Tristano Ajmone"

<!-- Issues 3rd Party -->

[curiousdannii/hugo#4]: https://github.com/curiousdannii/hugo/issues/4 "View Issue #4 at curiousdannii/hugo"

<!-- EditorConfig -->

[EditorConfig]: https://editorconfig.org/ "Visit EditorConfig website"
[ECLint]: https://www.npmjs.com/package/eclint "Visit ECLint page at NPM"
[either natively or via plug-ins]: https://editorconfig.org/#download "More info on editors support for EditorConfig"

<!-- people -->

[Dannii Willis]: https://github.com/curiousdannii "View Dannii Willis's GitHub profile"
[Marc Simpson]: https://github.com/0branch "View Marc Simpson's GitHub profile"
[Nikos Chantziaras]: https://github.com/realnc "View Nikos Chantziaras's GitHub profile"
[Tristano Ajmone]: https://github.com/tajmone "View Tristano Ajmone's GitHub profile"
[Kent Tessman]: https://github.com/tessman "View Kent Tessman's GitHub profile"

<!-- project links -->

[Hugo Wiki]: https://github.com/tajmone/hugo/wiki "Visit the Hugo Wiki of this repository"

<!-- project files -->

[LICENSE]: ./LICENSE "View full text of the BSD 2-Clause License"
[.ec]: ./.editorconfig "View the EditorConfig settings file"

<!-- EOF -->
