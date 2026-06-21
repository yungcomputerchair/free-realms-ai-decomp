// addr: 0x0130a8e0
// name: FUN_0130a8e0
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void LobbyService_collectAccountObjects(void * service) */

void __thiscall LobbyService_collectAccountObjects(void *this,void *service)

{
  int iVar1;
  int iVar2;
  char cVar3;
  void **value;
  void *extraout_EAX;
  void *pvVar4;
  int *piVar5;
  int iVar6;
  int extraout_EDX;
  int extraout_EDX_00;
  int extraout_EDX_01;
  int extraout_EDX_02;
  int extraout_EDX_03;
  int extraout_EDX_04;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined8 uVar9;
  void *in_stack_00000008;
  undefined1 local_90 [4];
  void *local_8c;
  undefined4 local_88;
  undefined4 local_84;
  void *local_80;
  void *local_7c;
  undefined4 *local_78;
  undefined4 *local_70;
  undefined1 local_6c [8];
  undefined1 local_64 [8];
  undefined1 local_5c [8];
  undefined1 local_54 [8];
  undefined1 local_4c [8];
  undefined1 local_44 [8];
  undefined1 local_3c [8];
  undefined1 local_34 [8];
  undefined1 local_2c [8];
  undefined1 local_24 [8];
  undefined1 local_1c [8];
  undefined1 local_14 [8];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Builds vectors of account-related objects from lobby service account maps and
                       pointer vectors. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01676ae2;
  local_c = ExceptionList;
  value = (void **)(DAT_01b839d8 ^ (uint)&stack0xffffff60);
  ExceptionList = &local_c;
  LobbyAccount_ensureSingleton();
  local_7c = extraout_EAX;
  local_80 = (void *)FUN_012cfde0();
  switch(service) {
  case (void *)0x1:
    local_8c = (void *)0x0;
    local_88 = 0;
    local_84 = 0;
    local_4 = 0;
    cVar3 = FUN_0130a060(1,local_90);
    if (cVar3 != '\0') {
      piVar5 = (int *)FUN_0041f5d2(local_4c);
      local_78 = (undefined4 *)piVar5[1];
      iVar1 = *piVar5;
      piVar5 = (int *)FUN_0041f3a1(local_14);
      iVar2 = *piVar5;
      puVar7 = (undefined4 *)piVar5[1];
      while( true ) {
        if ((iVar2 == 0) || (iVar2 != iVar1)) {
          FUN_00d83c2d();
        }
        if (puVar7 == local_78) break;
        if (iVar2 == 0) {
          FUN_00d83c2d();
        }
        if (*(undefined4 **)(iVar2 + 8) <= puVar7) {
          FUN_00d83c2d();
        }
        iVar6 = FUN_012cc6b0(*puVar7);
        if (iVar6 != 0) {
          local_80 = (void *)(iVar6 + 4);
          PointerVector_pushBack(in_stack_00000008,&local_80,value);
        }
        if (*(undefined4 **)(iVar2 + 8) <= puVar7) {
          FUN_00d83c2d();
        }
        puVar7 = puVar7 + 1;
      }
    }
    break;
  case (void *)0x2:
    local_8c = (void *)0x0;
    local_88 = 0;
    local_84 = 0;
    local_4 = 1;
    cVar3 = FUN_0130a060(2,local_90);
    if (cVar3 != '\0') {
      piVar5 = (int *)FUN_0041f5d2(local_5c);
      iVar1 = *piVar5;
      puVar7 = (undefined4 *)piVar5[1];
      piVar5 = (int *)FUN_0041f3a1(local_1c);
      iVar2 = *piVar5;
      puVar8 = (undefined4 *)piVar5[1];
      while( true ) {
        if ((iVar2 == 0) || (iVar2 != iVar1)) {
          FUN_00d83c2d();
        }
        if (puVar8 == puVar7) break;
        if (iVar2 == 0) {
          FUN_00d83c2d();
        }
        if (*(undefined4 **)(iVar2 + 8) <= puVar8) {
          FUN_00d83c2d();
        }
        iVar6 = FUN_012cc710(*puVar8);
        if (iVar6 != 0) {
          local_7c = (void *)(iVar6 + 4);
          PointerVector_pushBack(in_stack_00000008,&local_7c,value);
        }
        if (*(undefined4 **)(iVar2 + 8) <= puVar8) {
          FUN_00d83c2d();
        }
        puVar8 = puVar8 + 1;
      }
    }
    break;
  case (void *)0x3:
    local_8c = (void *)0x0;
    local_88 = 0;
    local_84 = 0;
    local_4 = 2;
    PropertyAggregate_collectChildValues(this,local_90);
    piVar5 = (int *)FUN_0041f5d2(local_6c);
    local_70 = (undefined4 *)piVar5[1];
    iVar1 = *piVar5;
    uVar9 = FUN_0041f3a1(local_2c);
    iVar6 = (int)((ulonglong)uVar9 >> 0x20);
    iVar2 = *(int *)uVar9;
    puVar7 = (undefined4 *)((int *)uVar9)[1];
    while( true ) {
      if ((iVar2 == 0) || (iVar2 != iVar1)) {
        FUN_00d83c2d();
        iVar6 = extraout_EDX;
      }
      if (puVar7 == local_70) break;
      if (iVar2 == 0) {
        FUN_00d83c2d();
        iVar6 = extraout_EDX_00;
      }
      if (*(undefined4 **)(iVar2 + 8) <= puVar7) {
        FUN_00d83c2d();
        iVar6 = extraout_EDX_01;
      }
      pvVar4 = LobbyServiceAccountMap_findValue(local_7c,iVar6);
      iVar6 = extraout_EDX_02;
      if (pvVar4 != (void *)0x0) {
        local_80 = pvVar4;
        PointerVector_pushBack(in_stack_00000008,&local_80,value);
        iVar6 = extraout_EDX_03;
      }
      if (*(undefined4 **)(iVar2 + 8) <= puVar7) {
        FUN_00d83c2d();
        iVar6 = extraout_EDX_04;
      }
      puVar7 = puVar7 + 1;
    }
    goto LAB_0130add0;
  case (void *)0x4:
    local_8c = (void *)0x0;
    local_88 = 0;
    local_84 = 0;
    local_4 = 3;
    FUN_0130a060(6,local_90);
    FUN_0130a060(5,local_90);
    FUN_0130a060(7,local_90);
    FUN_0130a060(8,local_90);
    piVar5 = (int *)FUN_0041f5d2(local_3c);
    local_70 = (undefined4 *)piVar5[1];
    iVar1 = *piVar5;
    piVar5 = (int *)FUN_0041f3a1(local_64);
    iVar2 = *piVar5;
    puVar7 = (undefined4 *)piVar5[1];
    while( true ) {
      if ((iVar2 == 0) || (iVar2 != iVar1)) {
        FUN_00d83c2d();
      }
      if (puVar7 == local_70) break;
      if (iVar2 == 0) {
        FUN_00d83c2d();
      }
      if (*(undefined4 **)(iVar2 + 8) <= puVar7) {
        FUN_00d83c2d();
      }
      iVar6 = FUN_012cc6b0(*puVar7);
      if (iVar6 != 0) {
        local_7c = (void *)(iVar6 + 4);
        PointerVector_pushBack(in_stack_00000008,&local_7c,value);
      }
      if (*(undefined4 **)(iVar2 + 8) <= puVar7) {
        FUN_00d83c2d();
      }
      puVar7 = puVar7 + 1;
    }
    goto LAB_0130add0;
  case (void *)0x5:
    local_8c = (void *)0x0;
    local_88 = 0;
    local_84 = 0;
    local_4 = 4;
    FUN_0130a060(10,local_90);
    FUN_0130a060(9,local_90);
    piVar5 = (int *)FUN_0041f5d2(local_54);
    iVar1 = *piVar5;
    puVar7 = (undefined4 *)piVar5[1];
    piVar5 = (int *)FUN_0041f3a1(local_44);
    iVar2 = *piVar5;
    puVar8 = (undefined4 *)piVar5[1];
    while( true ) {
      if ((iVar2 == 0) || (iVar2 != iVar1)) {
        FUN_00d83c2d();
      }
      if (puVar8 == puVar7) break;
      if (iVar2 == 0) {
        FUN_00d83c2d();
      }
      if (*(undefined4 **)(iVar2 + 8) <= puVar8) {
        FUN_00d83c2d();
      }
      iVar6 = FUN_012cc6b0(*puVar8);
      if (iVar6 != 0) {
        local_7c = (void *)(iVar6 + 4);
        PointerVector_pushBack(in_stack_00000008,&local_7c,value);
      }
      if (*(undefined4 **)(iVar2 + 8) <= puVar8) {
        FUN_00d83c2d();
      }
      puVar8 = puVar8 + 1;
    }
    break;
  case (void *)0x6:
    local_8c = (void *)0x0;
    local_88 = 0;
    local_84 = 0;
    local_4 = 5;
    FUN_0130a060(0xb,local_90);
    piVar5 = (int *)FUN_0041f5d2(local_34);
    iVar1 = *piVar5;
    local_70 = (undefined4 *)piVar5[1];
    piVar5 = (int *)FUN_0041f3a1(local_24);
    iVar2 = *piVar5;
    puVar7 = (undefined4 *)piVar5[1];
    while( true ) {
      if ((iVar2 == 0) || (iVar2 != iVar1)) {
        FUN_00d83c2d();
      }
      if (puVar7 == local_70) break;
      if (iVar2 == 0) {
        FUN_00d83c2d();
      }
      if (*(undefined4 **)(iVar2 + 8) <= puVar7) {
        FUN_00d83c2d();
      }
      iVar6 = FUN_012cc6b0(*puVar7);
      if (iVar6 != 0) {
        local_7c = (void *)(iVar6 + 4);
        PointerVector_pushBack(in_stack_00000008,&local_7c,value);
      }
      if (*(undefined4 **)(iVar2 + 8) <= puVar7) {
        FUN_00d83c2d();
      }
      puVar7 = puVar7 + 1;
    }
LAB_0130add0:
    local_4 = 0xffffffff;
    if (local_8c != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      _free(local_8c);
    }
  default:
    goto switchD_0130a936_default;
  }
  local_4 = 0xffffffff;
  if (local_8c != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(local_8c);
  }
switchD_0130a936_default:
  ExceptionList = local_c;
  return;
}

