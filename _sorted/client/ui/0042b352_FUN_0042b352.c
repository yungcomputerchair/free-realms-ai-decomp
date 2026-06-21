// addr: 0x0042b352
// name: FUN_0042b352
// subsystem: common/client/ui
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool FUN_0042b352(void * this) */

bool __fastcall FUN_0042b352(void *this)

{
  byte bVar1;
  int iVar2;
  
                    /* Returns the inverse of a cached disabled/available bit, lazily recomputing it
                       from the resolved object at this+0x44 and that object's flag at +0x60 when
                       dirty bit 0x400 is set. Exact wrapper class is unknown. */
  if ((*(ushort *)((int)this + 0x14) & 0x400) != 0) {
    iVar2 = FUN_0042b2c9();
    if (iVar2 == 0) {
      bVar1 = 0;
    }
    else if ((*(uint *)(*(int *)((int)this + 0x44) + 0x60) & 1) == 0) {
      bVar1 = 1;
    }
    else {
      bVar1 = 0;
    }
    *(ushort *)((int)this + 0x14) =
         (-(ushort)bVar1 & 0xfffc) + 4 | *(ushort *)((int)this + 0x14) & 0xfffb;
  }
  return (bool)(~(*(byte *)((int)this + 0x14) >> 2) & 1);
}

