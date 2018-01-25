HEADERS      += dialog.h
SOURCES      += dialog.cpp  main.cpp
FORMS   += display.ui

# install
target.path = $$[QT_INSTALL_EXAMPLES]/widgets/wiggly
sources.files = $$SOURCES $$HEADERS $$RESOURCES $$FORMS wiggly.pro
sources.path = $$[QT_INSTALL_EXAMPLES]/widgets/wiggly
INSTALLS += target sources

symbian {
    TARGET.UID3 = 0xA000C607
    include($$QT_SOURCE_TREE/examples/symbianpkgrules.pri)
}


DESTDIR      = bin
unix {
MOC_DIR      = /tmp/$${TARGET}
RCC_DIR      = /tmp/$${TARGET}
OBJECTS_DIR  = /tmp/$${TARGET}
}

win {
MOC_DIR      = c:/tmp/$${TARGET}
RCC_DIR      = c:/tmp/$${TARGET}
OBJECTS_DIR  = c:/tmp/$${TARGET}
}

INCLUDEPATH += ../../lib/include

QMAKE_CXXFLAGS_RELEASE  = -O0

message ("Host = " $${QMAKE_HOST.arch})

unix {
contains(QMAKE_HOST.arch, x86_64):{
}

contains(QMAKE_HOST.arch, i686):{
}
}

win32 {
#   QMAKE_POST_LINK += "copy ..\..\lib\win32\*.* bin  /y /q"
}

unix {
    DEFINES += LINUX_WAY
}

SOURCES += smtp_ssl_email.c

INCLUDEPATH += include
QMAKE_CXXFLAGS_RELEASE  = -O0

SOURCES += library/aes.c
SOURCES += library/aesni.c
SOURCES += library/arc4.c
SOURCES += library/asn1parse.c
SOURCES += library/asn1write.c
SOURCES += library/base64.c
SOURCES += library/bignum.c
SOURCES += library/blowfish.c
SOURCES += library/camellia.c
SOURCES += library/ccm.c
SOURCES += library/certs.c
SOURCES += library/cipher.c
SOURCES += library/cipher_wrap.c
SOURCES += library/cmac.c
SOURCES += library/ctr_drbg.c
SOURCES += library/debug.c
SOURCES += library/des.c
SOURCES += library/dhm.c
SOURCES += library/ecdh.c
SOURCES += library/ecdsa.c
SOURCES += library/ecjpake.c
SOURCES += library/ecp.c
SOURCES += library/ecp_curves.c
SOURCES += library/entropy.c
SOURCES += library/entropy_poll.c
SOURCES += library/error.c
SOURCES += library/gcm.c
SOURCES += library/havege.c
SOURCES += library/hmac_drbg.c
SOURCES += library/md2.c
SOURCES += library/md4.c
SOURCES += library/md5.c
SOURCES += library/md.c
SOURCES += library/md_wrap.c
SOURCES += library/memory_buffer_alloc.c
SOURCES += library/net_sockets.c
SOURCES += library/oid.c
SOURCES += library/padlock.c
SOURCES += library/pem.c
SOURCES += library/pk.c
SOURCES += library/pkcs11.c
SOURCES += library/pkcs12.c
SOURCES += library/pkcs5.c
SOURCES += library/pkparse.c
SOURCES += library/pk_wrap.c
SOURCES += library/pkwrite.c
SOURCES += library/platform.c
SOURCES += library/ripemd160.c
SOURCES += library/rsa.c
SOURCES += library/sha1.c
SOURCES += library/sha256.c
SOURCES += library/sha512.c
SOURCES += library/ssl_cache.c
SOURCES += library/ssl_ciphersuites.c
SOURCES += library/ssl_cli.c
SOURCES += library/ssl_cookie.c
SOURCES += library/ssl_srv.c
SOURCES += library/ssl_ticket.c
SOURCES += library/ssl_tls.c
SOURCES += library/threading.c
SOURCES += library/timing.c
SOURCES += library/version.c
SOURCES += library/version_features.c
SOURCES += library/x509.c
SOURCES += library/x509_create.c
SOURCES += library/x509_crl.c
SOURCES += library/x509_crt.c
SOURCES += library/x509_csr.c
SOURCES += library/x509write_crt.c
SOURCES += library/x509write_csr.c
SOURCES += library/xtea.c
