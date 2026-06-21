// addr: 0x01339fc0
// name: FUN_01339fc0
// subsystem: common/common/rules
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool FUN_01339fc0(void * context) */

bool __fastcall FUN_01339fc0(void *context)

{
  undefined4 *puVar1;
  int *piVar2;
  char cVar3;
  void *pvVar4;
  int *piVar5;
  int extraout_EDX;
  int extraout_EDX_00;
  int extraout_EDX_01;
  int extraout_EDX_02;
  int extraout_EDX_03;
  int extraout_EDX_04;
  int extraout_EDX_05;
  int extraout_EDX_06;
  int iVar6;
  int extraout_EDX_07;
  int extraout_EDX_08;
  int extraout_EDX_09;
  int extraout_EDX_10;
  int extraout_EDX_11;
  int extraout_EDX_12;
  int extraout_EDX_13;
  int extraout_EDX_14;
  undefined4 *puVar7;
  undefined8 uVar8;
  void *unaff_retaddr;
  undefined4 uVar9;
  TypeDescriptor *pTVar10;
  TypeDescriptor *pTVar11;
  undefined4 uVar12;
  int **item;
  void *pvStack_20;
  int *local_1c;
  int *local_18;
  void *local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Builds/filters a temporary list of PlayElement/CWCard objects, removes
                       entries that fail virtual checks, then invokes a virtual method on remaining
                       objects and on the current CWCard. No class or method string is present, so
                       the exact identity is unresolved. */
  puStack_8 = &LAB_0167b998;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_18 = (int *)0x0;
  local_14 = (void *)0x0;
  local_10 = 0;
  local_4 = 0;
  item = &local_1c;
  cVar3 = (**(code **)(*(int *)context + 0x14c))(item,DAT_01b839d8 ^ (uint)&stack0xffffffd0);
  piVar5 = local_1c;
  iVar6 = extraout_EDX;
  if (cVar3 != '\0') {
    if (local_18 < local_1c) {
      FUN_00d83c2d();
      iVar6 = extraout_EDX_00;
    }
    while( true ) {
      piVar2 = local_18;
      if (local_18 < local_1c) {
        FUN_00d83c2d();
        iVar6 = extraout_EDX_01;
      }
      if (piVar5 == piVar2) break;
      if (local_18 <= piVar5) {
        FUN_00d83c2d();
        iVar6 = extraout_EDX_02;
      }
      if (*piVar5 != 0) {
        if (local_18 <= piVar5) {
          FUN_00d83c2d();
        }
        cVar3 = (**(code **)(*(int *)*piVar5 + 0x4c))();
        iVar6 = extraout_EDX_03;
        if (cVar3 != '\0') {
          if (local_18 <= piVar5) {
            FUN_00d83c2d();
          }
          cVar3 = (**(code **)(*(int *)*piVar5 + 0x1e8))();
          iVar6 = extraout_EDX_04;
          if (cVar3 == '\0') {
            if (local_18 <= piVar5) {
              FUN_00d83c2d();
              iVar6 = extraout_EDX_05;
            }
            uVar12 = 0;
            pTVar11 = &CWCard::RTTI_Type_Descriptor;
            pTVar10 = &PlayElement::RTTI_Type_Descriptor;
            uVar9 = 0;
            pvVar4 = find_play_element_in_maps(context,iVar6);
            uVar8 = FUN_00d8d382(pvVar4,uVar9,pTVar10,pTVar11,uVar12);
            iVar6 = (int)((ulonglong)uVar8 >> 0x20);
            if (*piVar5 != (int)uVar8) {
              if (local_18 <= piVar5) {
                FUN_00d83c2d();
              }
              PointerVector_pushBack(unaff_retaddr,piVar5,item);
              iVar6 = extraout_EDX_06;
            }
          }
        }
      }
      if (local_18 <= piVar5) {
        FUN_00d83c2d();
        iVar6 = extraout_EDX_07;
      }
      piVar5 = piVar5 + 1;
    }
  }
  puVar1 = *(undefined4 **)((int)context + 0x2c);
  if (puVar1 < *(undefined4 **)((int)context + 0x28)) {
    FUN_00d83c2d();
    iVar6 = extraout_EDX_08;
  }
  puVar7 = *(undefined4 **)((int)context + 0x28);
  if (*(undefined4 **)((int)context + 0x2c) < puVar7) {
    FUN_00d83c2d();
    iVar6 = extraout_EDX_09;
  }
  while( true ) {
    if (context == (void *)0xffffffdc) {
      FUN_00d83c2d();
      iVar6 = extraout_EDX_10;
    }
    if (puVar7 == puVar1) break;
    if (context == (void *)0xffffffdc) {
      FUN_00d83c2d();
      iVar6 = extraout_EDX_11;
    }
    if (*(undefined4 **)((int)context + 0x2c) <= puVar7) {
      FUN_00d83c2d();
      iVar6 = extraout_EDX_12;
    }
    if ((void *)*puVar7 != (void *)0x0) {
      piVar5 = (int *)unknown_getField30((void *)*puVar7);
      (**(code **)(*piVar5 + 0x34))(unaff_retaddr);
      iVar6 = extraout_EDX_13;
    }
    if (*(undefined4 **)((int)context + 0x2c) <= puVar7) {
      FUN_00d83c2d();
      iVar6 = extraout_EDX_14;
    }
    puVar7 = puVar7 + 1;
  }
  uVar12 = 0;
  pTVar11 = &CWCard::RTTI_Type_Descriptor;
  pTVar10 = &PlayElement::RTTI_Type_Descriptor;
  uVar9 = 0;
  pvVar4 = find_play_element_in_maps(context,iVar6);
  piVar5 = (int *)FUN_00d8d382(pvVar4,uVar9,pTVar10,pTVar11,uVar12);
  (**(code **)(*piVar5 + 0x34))(unaff_retaddr);
  local_c = (void *)0xffffffff;
  if (pvStack_20 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(pvStack_20);
  }
  ExceptionList = local_14;
  return true;
}

