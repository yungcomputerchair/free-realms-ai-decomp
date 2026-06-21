// addr: 0x006648c7
// name: FUN_006648c7
// subsystem: common/common/all
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void FUN_006648c7(void * this, void * entry) */

void __thiscall FUN_006648c7(void *this,void *entry)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  
                    /* Adjusts an entry's position/advance fields using scaled metrics from this
                       object, including fixed-point accumulation and an optional lookup path. */
  if (*(char *)this == '\0') {
    iVar4 = *(int *)((int)entry + 0x1c);
  }
  else {
    iVar4 = FUN_006645f4(entry,*(undefined4 *)((int)this + 0x50));
  }
  if (iVar4 < 0) {
    iVar4 = *(int *)((int)entry + 0x18);
    if (iVar4 < 0) {
      iVar4 = (*(int *)((int)this + 8) * iVar4) / -10000;
    }
    if (*(int *)((int)entry + 0x20) < iVar4) {
      puVar1 = (uint *)((int)this + 0x40);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 + *(uint *)((int)this + 0x48);
      uVar3 = *(uint *)((int)this + 0x40);
      *(int *)((int)this + 0x44) =
           *(int *)((int)this + 0x44) + *(int *)((int)this + 0x4c) +
           (uint)CARRY4(uVar2,*(uint *)((int)this + 0x48));
      iVar4 = *(int *)((int)this + 0x44);
      lVar6 = __allshr(0xf,iVar4);
      iVar5 = (int)lVar6;
      *(uint *)((int)this + 0x44) =
           (iVar4 - (iVar5 * 0x8000 >> 0x1f)) - (uint)(uVar3 < (uint)(iVar5 * 0x8000));
      *(uint *)((int)this + 0x40) = uVar3 + iVar5 * -0x8000;
      *(int *)((int)entry + 0x20) = *(int *)((int)entry + 0x20) + iVar5;
      if ((*(char *)this != '\0') && ((*(byte *)entry & 0x60) == 0)) {
        *(undefined4 *)((int)entry + 0x1c) = *(undefined4 *)((int)entry + 0x20);
      }
    }
  }
  return;
}

