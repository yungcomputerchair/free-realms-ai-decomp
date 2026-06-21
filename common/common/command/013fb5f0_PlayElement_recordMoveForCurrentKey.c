// addr: 0x013fb5f0
// name: PlayElement_recordMoveForCurrentKey
// subsystem: common/common/command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void PlayElement_recordMoveForCurrentKey(void * this) */

void __fastcall PlayElement_recordMoveForCurrentKey(void *this)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined4 uStack_20;
  undefined4 local_1c;
  undefined4 uStack_18;
  int local_10;
  undefined1 auStack_c [12];
  
                    /* Updates a per-key movement record for the PlayElement using its virtual key
                       at slot 0x3c, preserving a previous value if present, and increments a move
                       counter field. Called by CommandObjectMove_doCommand. */
  local_10 = *(int *)((int)this + 0x20);
  local_1c = 0;
  uStack_20 = (**(code **)(*(int *)this + 0x3c))();
  piVar3 = (int *)FUN_013f9d10(auStack_c,&uStack_20);
  iVar1 = *piVar3;
  iVar2 = piVar3[1];
  if ((iVar1 == 0) || (iVar1 != (int)this + 0x1c)) {
    FUN_00d83c2d();
  }
  uVar4 = local_1c;
  if (iVar2 != local_10) {
    if (iVar1 == 0) {
      FUN_00d83c2d();
    }
    if (iVar2 == *(int *)(iVar1 + 4)) {
      FUN_00d83c2d();
    }
    uVar4 = *(undefined4 *)(iVar2 + 0x10);
  }
  local_1c = (**(code **)(*(int *)this + 0x3c))();
  uStack_18 = uVar4;
  FUN_013fb020(auStack_c,&local_1c);
  *(int *)((int)this + 0x28) = *(int *)((int)this + 0x28) + 1;
  return;
}

