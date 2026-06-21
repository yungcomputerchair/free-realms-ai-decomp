// addr: 0x01014690
// name: CharacterCustomization_setAppearanceResources
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void CharacterCustomization_setAppearanceResources(void * this, void *
   primaryA, void * primaryB, void * secondaryA, void * secondaryB) */

void __thiscall
CharacterCustomization_setAppearanceResources
          (void *this,void *primaryA,void *primaryB,void *secondaryA,void *secondaryB)

{
  undefined3 uVar1;
  void *pvVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  undefined1 local_54 [72];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Creates/replaces primary and optional secondary resource objects, releases
                       previous objects, copies a derived 0x12-word descriptor into the instance,
                       and updates active resource counts. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016342a6;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pvVar2 = Mem_Alloc(0xd8);
  uVar6 = 0;
  local_4 = 0;
  if (pvVar2 == (void *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_010135d0(*(undefined4 *)((int)this + 0x198),primaryA,primaryB);
  }
  local_4._1_3_ = 0;
  uVar1 = local_4._1_3_;
  local_4._0_1_ = 2;
  local_4._1_3_ = 0;
  if ((secondaryA != (void *)0x0) && (uVar1 = local_4._1_3_, secondaryB != (void *)0x0)) {
    pvVar2 = Mem_Alloc(0xc0);
    local_4._0_1_ = 3;
    if (pvVar2 == (void *)0x0) {
      uVar6 = 0;
      uVar1 = local_4._1_3_;
    }
    else {
      uVar6 = FUN_010136e0(*(undefined4 *)((int)this + 0x198),secondaryA,secondaryB);
      uVar1 = local_4._1_3_;
    }
  }
  local_4._1_3_ = uVar1;
  local_4._0_1_ = 2;
  if (*(int *)((int)this + 0x60) != 0) {
    FUN_01014050(*(int *)((int)this + 0x60));
    *(undefined4 *)((int)this + 0x60) = 0;
  }
  *(undefined4 *)((int)this + 0x60) = uVar3;
  if (*(int *)((int)this + 0x68) != 0) {
    FUN_010140b0(*(int *)((int)this + 0x68));
    *(undefined4 *)((int)this + 0x68) = 0;
  }
  *(undefined4 *)((int)this + 0x68) = uVar6;
  puVar4 = init_video_frame_header(local_54,primaryA,(int)primaryB,(int)secondaryA,(int)secondaryB);
  puVar7 = (undefined4 *)((int)this + 0x18);
  for (iVar5 = 0x12; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar7 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar7 = puVar7 + 1;
  }
  *(int *)((int)this + 0x38) = *(int *)((int)this + 0x38) + 1;
  if (*(int *)((int)this + 0x68) != 0) {
    *(int *)((int)this + 0x38) = *(int *)((int)this + 0x38) + 1;
  }
  ExceptionList = local_c;
  return;
}

