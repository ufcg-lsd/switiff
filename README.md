# switiff

Accelerating TIFF access through Linux io_uring

TIFF images are very popular on geoprocessing applications, e.g. application to detect deforestation based on satellite imagery. A challenge of these applications is how to process big TIFF images (from hundreds of Megabytes to dozens of Gigabytes). A key piece of TIFF processing is the libtiff library. Any performance improvement on the the libtiff library has a direct benefit on the applications' performance.

In this switiff initiative, we aim to explore potential improvement to the libtiff library based on the recent io_uring Linux kernel feature.

## Useful links

* https://unixism.net/loti/async_intro.html
* https://pt.slideshare.net/ennael/kernel-recipes-2019-faster-io-through-iouring
* https://openinx.github.io/ppt/io-uring.pdf
* http://www.libtiff.org
* https://gitlab.com/libtiff/libtiff
