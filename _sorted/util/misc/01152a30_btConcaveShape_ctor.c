// addr: 0x01152a30
// name: btConcaveShape_ctor
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void btConcaveShape_ctor(undefined4 * this) */

void __fastcall btConcaveShape_ctor(undefined4 *this)

{
                    /* Constructs Bullet btConcaveShape, setting shape type 0x23, vtable, and
                       clearing margin/user fields. */
  this[1] = 0x23;
  this[2] = 0;
  *this = btConcaveShape::vftable;
  this[3] = 0;
  return;
}

