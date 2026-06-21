// addr: 0x0138df90
// name: FUN_0138df90
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool filter_attribute_modifier(void * ctx, void * modifier) */

bool __fastcall filter_attribute_modifier(void *ctx,void *modifier)

{
  uint uVar1;
  char cVar2;
  void *pvVar3;
  void *extraout_EDX;
  void *extraout_EDX_00;
  void *extraout_EDX_01;
  void *extraout_EDX_02;
  void *extraout_EDX_03;
  void *extraout_EDX_04;
  void *extraout_EDX_05;
  uint uVar4;
  undefined4 unaff_EDI;
  undefined8 uVar5;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 uVar6;
  TypeDescriptor *pTVar7;
  TypeDescriptor *pTVar8;
  undefined4 uVar9;
  
                    /* Checks whether an attribute modifier is filtered and logs "attrMod is
                       filtered." when it is rejected. Exact class is not identifiable. */
  uVar1 = *(uint *)((int)ctx + 0xd4);
  if (uVar1 < *(uint *)((int)ctx + 0xd0)) {
    FUN_00d83c2d();
    modifier = extraout_EDX;
  }
  uVar4 = *(uint *)((int)ctx + 0xd0);
  if (*(uint *)((int)ctx + 0xd4) < uVar4) {
    FUN_00d83c2d();
    modifier = extraout_EDX_00;
  }
  while( true ) {
    if (ctx == (void *)0xffffff34) {
      FUN_00d83c2d();
      modifier = extraout_EDX_01;
    }
    if (uVar4 == uVar1) {
      return true;
    }
    if (ctx == (void *)0xffffff34) {
      FUN_00d83c2d();
      modifier = extraout_EDX_02;
    }
    if (*(uint *)((int)ctx + 0xd4) <= uVar4) {
      FUN_00d83c2d();
      modifier = extraout_EDX_03;
    }
    uVar9 = 0;
    pTVar8 = &ValidAttrModFilter::RTTI_Type_Descriptor;
    pTVar7 = &PlayElement::RTTI_Type_Descriptor;
    uVar6 = 0;
    pvVar3 = find_play_element_in_maps(*(void **)((int)ctx + 0x30),(int)modifier);
    uVar5 = FUN_00d8d382(pvVar3,uVar6,pTVar7,pTVar8,uVar9);
    modifier = (void *)((ulonglong)uVar5 >> 0x20);
    if (((int)uVar5 != 0) &&
       (cVar2 = AttributeModifier_evaluateCommandList(in_stack_00000004,in_stack_00000008),
       modifier = extraout_EDX_04, cVar2 == '\0')) break;
    if (*(uint *)((int)ctx + 0xd4) <= uVar4) {
      FUN_00d83c2d();
      modifier = extraout_EDX_05;
    }
    uVar4 = uVar4 + 4;
  }
  Game_logGeneral(*(void **)((int)ctx + 0x30),"attrMod is filtered.",unaff_EDI);
  return false;
}

