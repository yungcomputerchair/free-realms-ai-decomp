// addr: 0x00cb9e80
// name: HousePiece_refreshPhysics
// subsystem: common/physics/vehicle
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void HousePiece_refreshPhysics(void * this, void * context) */

void __thiscall HousePiece_refreshPhysics(void *this,void *context)

{
                    /* Marks the HousePiece physics state dirty/active, toggles several global
                       systems when the incoming context permits it, then rebuilds or refreshes the
                       piece collision physics. */
  *(undefined1 *)((int)this + 0x25) = 1;
  if ((*(char *)((int)this + 0x24) != '\0') && ((*(byte *)((int)context + 0x10) >> 1 & 1) == 0)) {
    FUN_00705200(1);
    FUN_00774c80(1);
    FUN_00764850(1);
  }
  HousePiece_buildPhysics((void *)((int)this + -0x50));
  return;
}

