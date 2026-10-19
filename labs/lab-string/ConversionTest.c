#include <assert.h>
#include "Conversion.h"

/*
 * ConversionTest.c — Pruebas del modulo Conversion
 *
 * Mismas restricciones que StringTest.c:
 * solo assert, literales, sin salida a stdout.
 */

int main(void) {

    /* ── ToInteger — tiene un bug, estos tests ya estan activos ─────────── */
    assert(ToInteger("0") == 0);
    assert(ToInteger("1") == 1);
    assert(ToInteger("42") == 42);
    assert(ToInteger("-7") == -7);
    assert(ToInteger("100") == 100);

    /* ── FromBinary ─────────────────────────────────────────────────────── */
    assert(FromBinary("0") == 0);
    assert(FromBinary("1") == 1);
    assert(FromBinary("10") == 2);
    assert(FromBinary("101") == 5);
    assert(FromBinary("11111111") == 255);
    assert(FromBinary("0001") == 1);

    return 0;
}
