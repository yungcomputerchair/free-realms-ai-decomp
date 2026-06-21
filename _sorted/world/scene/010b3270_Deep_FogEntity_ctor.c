// addr: 0x010b3270
// name: Deep_FogEntity_ctor
// subsystem: common/world/scene
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * Deep_FogEntity_ctor(void * this) */

void * __fastcall Deep_FogEntity_ctor(void *this)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  void *local_1c;
  undefined1 *puStack_18;
  undefined4 local_14;
  
                    /* Constructs a Deep::FogEntity, resolving hashed fog parameters from its
                       definition and initializing additional default resource/property handles. */
  local_14 = 0xffffffff;
  puStack_18 = &LAB_01647a58;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  uVar5 = 0;
  uVar4 = FUN_010b2df0(0xf36060ed);
  LightEntity_ctor(uVar4,uVar5);
  local_14 = 0;
  iVar1 = *(int *)((int)this + 0x1c);
  *(undefined ***)this = Deep::FogEntity::vftable;
  for (piVar2 = *(int **)(*(int *)(iVar1 + 0x10) + 0x60); piVar2 != (int *)0x0;
      piVar2 = (int *)piVar2[2]) {
    if (*piVar2 == 0x3997d8cf) {
      if ((piVar2 + 1 != (int *)0x0) && (iVar3 = piVar2[1], -1 < iVar3)) {
        uVar4 = *(undefined4 *)(*(int *)(iVar1 + 0x18) + iVar3 * 4);
        goto LAB_010b32e8;
      }
      break;
    }
  }
  uVar4 = 0;
LAB_010b32e8:
  *(undefined4 *)((int)this + 0xa0) = uVar4;
  for (piVar2 = *(int **)(*(int *)(iVar1 + 0x10) + 0x2c); piVar2 != (int *)0x0;
      piVar2 = (int *)piVar2[2]) {
    if (*piVar2 == -0x1ead71be) {
      if ((piVar2 + 1 != (int *)0x0) && (iVar3 = piVar2[1], -1 < iVar3)) {
        uVar4 = *(undefined4 *)(*(int *)(iVar1 + 0x18) + iVar3 * 4);
        goto LAB_010b3315;
      }
      break;
    }
  }
  uVar4 = 0;
LAB_010b3315:
  *(undefined4 *)((int)this + 0xac) = uVar4;
  for (piVar2 = *(int **)(*(int *)(iVar1 + 0x10) + 0x90); piVar2 != (int *)0x0;
      piVar2 = (int *)piVar2[2]) {
    if (*piVar2 == 0x465f78fb) {
      if ((piVar2 + 1 != (int *)0x0) && (iVar3 = piVar2[1], -1 < iVar3)) {
        uVar4 = *(undefined4 *)(*(int *)(iVar1 + 0x18) + iVar3 * 4);
        goto LAB_010b3345;
      }
      break;
    }
  }
  uVar4 = 0;
LAB_010b3345:
  *(undefined4 *)((int)this + 0xa4) = uVar4;
  piVar2 = *(int **)(*(int *)(iVar1 + 0x10) + 0x3c);
  do {
    if (piVar2 == (int *)0x0) {
LAB_010b3373:
      uVar4 = 0;
LAB_010b3375:
      *(undefined4 *)((int)this + 0xa8) = uVar4;
      uVar4 = FUN_008b2dd0(0x7b8a53eb);
      *(undefined4 *)((int)this + 0xb8) = uVar4;
      uVar4 = FUN_008b2dd0(0x50ef78a6);
      *(undefined4 *)((int)this + 0xb0) = uVar4;
      uVar4 = FUN_008b2dd0(0x22083bf1);
      *(undefined4 *)((int)this + 0xb4) = uVar4;
      uVar4 = FUN_008b2dd0(0x45e69526);
      *(undefined4 *)((int)this + 0xbc) = uVar4;
      ExceptionList = local_1c;
      return this;
    }
    if (*piVar2 == 0x3dd73ee6) {
      if ((piVar2 + 1 != (int *)0x0) && (iVar3 = piVar2[1], -1 < iVar3)) {
        uVar4 = *(undefined4 *)(*(int *)(iVar1 + 0x18) + iVar3 * 4);
        goto LAB_010b3375;
      }
      goto LAB_010b3373;
    }
    piVar2 = (int *)piVar2[2];
  } while( true );
}

