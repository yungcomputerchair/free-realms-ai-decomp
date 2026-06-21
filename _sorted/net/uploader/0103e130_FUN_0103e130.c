// addr: 0x0103e130
// name: FUN_0103e130
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void FUN_0103e130(void * this, void * other) */

void __thiscall FUN_0103e130(void *this,void *other)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
                    /* Copy/assigns an unknown object, clamping range-like fields and copying an
                       optional auxiliary 16-byte structure at offset 0x28. */
  pcVar1 = *(code **)(*(int *)this + 0xc);
  *(undefined4 *)((int)this + 0x10) = *(undefined4 *)((int)other + 0x10);
  (*pcVar1)(*(undefined4 *)((int)other + 0x14));
  iVar2 = *(int *)((int)other + 0x18);
  iVar3 = *(int *)((int)this + 0x14);
  *(int *)((int)this + 0x18) = iVar2;
  if (iVar3 < iVar2) {
    *(int *)((int)this + 0x18) = iVar3;
  }
  else if (iVar2 < 0) {
    *(undefined4 *)((int)this + 0x18) = 0;
  }
  *(undefined4 *)((int)this + 0x1c) = 0;
  if (iVar3 < 0) {
    *(int *)((int)this + 0x1c) = iVar3;
  }
  uVar6 = *(undefined4 *)((int)other + 0x24);
  *(undefined4 *)((int)this + 0x20) = *(undefined4 *)((int)other + 0x20);
  *(undefined4 *)((int)this + 0x24) = uVar6;
  *(undefined4 *)((int)this + 4) = *(undefined4 *)((int)other + 4);
  *(undefined4 *)((int)this + 8) = *(undefined4 *)((int)other + 8);
  puVar4 = *(undefined4 **)((int)other + 0x28);
  if (puVar4 != (undefined4 *)0x0) {
    uVar6 = *puVar4;
    uVar5 = puVar4[1];
    FUN_0103df50(this);
    puVar4 = *(undefined4 **)((int)this + 0x28);
    puVar4[1] = uVar5;
    *puVar4 = uVar6;
    if (*(int *)((int)other + 0x28) == 0) {
      uVar6 = 0;
    }
    else {
      uVar6 = *(undefined4 *)(*(int *)((int)other + 0x28) + 8);
    }
    FUN_0103df50(this);
    *(undefined4 *)(*(int *)((int)this + 0x28) + 8) = uVar6;
    if (*(int *)((int)other + 0x28) != 0) {
      uVar6 = *(undefined4 *)(*(int *)((int)other + 0x28) + 0xc);
      FUN_0103df50(this);
      *(undefined4 *)(*(int *)((int)this + 0x28) + 0xc) = uVar6;
      return;
    }
    FUN_0103df50(this);
    *(undefined4 *)(*(int *)((int)this + 0x28) + 0xc) = 0;
    return;
  }
  if (*(void **)((int)this + 0x28) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)this + 0x28));
  }
  return;
}

