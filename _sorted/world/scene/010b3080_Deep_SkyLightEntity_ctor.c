// addr: 0x010b3080
// name: Deep_SkyLightEntity_ctor
// subsystem: common/world/scene
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * Deep_SkyLightEntity_ctor(void * this) */

void * __fastcall Deep_SkyLightEntity_ctor(void *this)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  undefined4 local_60 [17];
  void *local_1c;
  undefined1 *puStack_18;
  undefined4 local_14;
  
                    /* Constructs a Deep::SkyLightEntity, resolves several hashed parameter/property
                       entries from its definition, initializes sky-light resource handles, and
                       copies default data. */
  local_14 = 0xffffffff;
  puStack_18 = &LAB_01647a28;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  uVar7 = 0;
  uVar3 = FUN_010b2df0(0x39ce7021);
  LightEntity_ctor(uVar3,uVar7);
  local_14 = 0;
  iVar4 = *(int *)((int)this + 0x1c);
  *(undefined ***)this = Deep::SkyLightEntity::vftable;
  for (piVar1 = *(int **)(*(int *)(iVar4 + 0x10) + 100); piVar1 != (int *)0x0;
      piVar1 = (int *)piVar1[2]) {
    if (*piVar1 == -0x3238a0d0) {
      if ((piVar1 + 1 != (int *)0x0) && (iVar2 = piVar1[1], -1 < iVar2)) {
        uVar3 = *(undefined4 *)(*(int *)(iVar4 + 0x18) + iVar2 * 4);
        goto LAB_010b30f9;
      }
      break;
    }
  }
  uVar3 = 0;
LAB_010b30f9:
  *(undefined4 *)((int)this + 0xac) = uVar3;
  for (piVar1 = *(int **)(*(int *)(iVar4 + 0x10) + 0x30); piVar1 != (int *)0x0;
      piVar1 = (int *)piVar1[2]) {
    if (*piVar1 == -0x19f3277d) {
      if ((piVar1 + 1 != (int *)0x0) && (iVar2 = piVar1[1], -1 < iVar2)) {
        uVar3 = *(undefined4 *)(*(int *)(iVar4 + 0x18) + iVar2 * 4);
        goto LAB_010b3125;
      }
      break;
    }
  }
  uVar3 = 0;
LAB_010b3125:
  *(undefined4 *)((int)this + 0xb0) = uVar3;
  for (piVar1 = *(int **)(*(int *)(iVar4 + 0x10) + 0x60); piVar1 != (int *)0x0;
      piVar1 = (int *)piVar1[2]) {
    if (*piVar1 == 0x3997d8cf) {
      if ((piVar1 + 1 != (int *)0x0) && (iVar2 = piVar1[1], -1 < iVar2)) {
        uVar3 = *(undefined4 *)(*(int *)(iVar4 + 0x18) + iVar2 * 4);
        goto LAB_010b3155;
      }
      break;
    }
  }
  uVar3 = 0;
LAB_010b3155:
  *(undefined4 *)((int)this + 0xa0) = uVar3;
  piVar1 = *(int **)(*(int *)(iVar4 + 0x10) + 0x54);
  do {
    if (piVar1 == (int *)0x0) {
LAB_010b3183:
      uVar3 = 0;
LAB_010b3185:
      *(undefined4 *)((int)this + 0xa4) = uVar3;
      uVar3 = FUN_008b2dd0(0x93aaa6d0);
      *(undefined4 *)((int)this + 0xa8) = uVar3;
      puVar5 = &DAT_01bc2660;
      puVar6 = local_60;
      for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar6 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar6 = puVar6 + 1;
      }
      FUN_010b2890(local_60);
      ExceptionList = local_1c;
      return this;
    }
    if (*piVar1 == -0x41013b14) {
      if ((piVar1 + 1 != (int *)0x0) && (iVar2 = piVar1[1], -1 < iVar2)) {
        uVar3 = *(undefined4 *)(*(int *)(iVar4 + 0x18) + iVar2 * 4);
        goto LAB_010b3185;
      }
      goto LAB_010b3183;
    }
    piVar1 = (int *)piVar1[2];
  } while( true );
}

