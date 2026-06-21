// addr: 0x011141f0
// name: btPolyhedralConvexAabbCachingShape_ctor
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Setting prototype: undefined4 * btPolyhedralConvexAabbCachingShape_ctor(undefined4 * this) */

undefined4 * __fastcall btPolyhedralConvexAabbCachingShape_ctor(undefined4 *this)

{
  undefined4 uVar1;
  
                    /* Constructs a Bullet btPolyhedralConvexAabbCachingShape, setting its vtable
                       and initializing cached local AABB min/max values and invalidation flag. */
  FUN_01113330();
  uVar1 = _DAT_0175b420;
  *this = btPolyhedralConvexAabbCachingShape::vftable;
  this[0x10] = 0;
  this[0x14] = uVar1;
  this[0x15] = uVar1;
  this[0x16] = uVar1;
  uVar1 = DAT_01762a34;
  this[0x17] = 0;
  this[0x18] = uVar1;
  this[0x19] = uVar1;
  this[0x1a] = uVar1;
  this[0x1b] = 0;
  *(undefined1 *)(this + 0x1c) = 0;
  return this;
}

