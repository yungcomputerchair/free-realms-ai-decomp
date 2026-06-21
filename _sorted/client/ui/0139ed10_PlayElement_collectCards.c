// addr: 0x0139ed10
// name: PlayElement_collectCards
// subsystem: common/client/ui
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void PlayElement_collectCards(void * this, void * outCards) */

void __thiscall PlayElement_collectCards(void *this,void *outCards)

{
  undefined4 *puVar1;
  uint uVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int local_30;
  int local_2c;
  int local_28;
  undefined4 *local_24;
  undefined4 *local_1c;
  undefined4 *local_14;
  undefined1 local_10 [12];
  
                    /* Collects Card pointers from nested PlayElement child vectors by RTTI-casting
                       PlayElement entries to Card and appending to an output vector. This is
                       equivalent in shape to 013432f0. */
  local_2c = (int)this + 0xc;
  local_14 = *(undefined4 **)((int)this + 0x10);
  local_24 = (undefined4 *)*local_14;
  local_28 = local_2c;
  while( true ) {
    puVar6 = local_24;
    iVar5 = local_28;
    if ((local_28 == 0) || (local_28 != local_2c)) {
      FUN_00d83c2d();
    }
    if (puVar6 == local_14) break;
    if (iVar5 == 0) {
      FUN_00d83c2d();
    }
    if (puVar6 == *(undefined4 **)(iVar5 + 4)) {
      FUN_00d83c2d();
    }
    puVar1 = (undefined4 *)puVar6[6];
    if (puVar1 < (undefined4 *)puVar6[5]) {
      FUN_00d83c2d();
    }
    if (local_24 == *(undefined4 **)(iVar5 + 4)) {
      FUN_00d83c2d();
    }
    puVar7 = (undefined4 *)puVar6[5];
    if ((undefined4 *)puVar6[6] < puVar7) {
      FUN_00d83c2d();
    }
    while( true ) {
      local_1c = puVar7;
      if (puVar6 == (undefined4 *)0xfffffff0) {
        FUN_00d83c2d();
      }
      if (puVar7 == puVar1) break;
      if (puVar6 == (undefined4 *)0xfffffff0) {
        FUN_00d83c2d();
      }
      if ((undefined4 *)puVar6[6] <= puVar7) {
        FUN_00d83c2d();
      }
      local_30 = FUN_00d8d382(*puVar7,0,&PlayElement::RTTI_Type_Descriptor,
                              &Card::RTTI_Type_Descriptor,0);
      if (local_30 != 0) {
        uVar2 = *(uint *)((int)outCards + 4);
        if ((uVar2 == 0) ||
           ((uint)((int)(*(int *)((int)outCards + 0xc) - uVar2) >> 2) <=
            (uint)((int)(*(int *)((int)outCards + 8) - uVar2) >> 2))) {
          uVar4 = *(uint *)((int)outCards + 8);
          if (uVar4 < uVar2) {
            FUN_00d83c2d();
          }
          FUN_012619f0(local_10,outCards,uVar4,&local_30);
          puVar7 = local_1c;
        }
        else {
          piVar3 = *(int **)((int)outCards + 8);
          *piVar3 = local_30;
          *(int **)((int)outCards + 8) = piVar3 + 1;
        }
      }
      if ((undefined4 *)puVar6[6] <= puVar7) {
        FUN_00d83c2d();
      }
      puVar7 = puVar7 + 1;
    }
    FUN_01340aa0();
  }
  return;
}

