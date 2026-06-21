// addr: 0x01357ad0
// name: Game_anyValidActionFilterRejects
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool Game_anyValidActionFilterRejects(void * this, void * action, void *
   source, void * target) */

bool __fastcall Game_anyValidActionFilterRejects(void *this,void *action,void *source,void *target)

{
  uint uVar1;
  bool bVar2;
  void *pvVar3;
  void *extraout_EDX;
  void *extraout_EDX_00;
  void *extraout_EDX_01;
  void *extraout_EDX_02;
  void *extraout_EDX_03;
  void *extraout_EDX_04;
  void *extraout_EDX_05;
  uint uVar4;
  undefined8 uVar5;
  void *in_stack_0000000c;
  undefined4 uVar6;
  TypeDescriptor *pTVar7;
  TypeDescriptor *pTVar8;
  undefined4 uVar9;
  
                    /* Iterates valid-action filters and returns false when a ValidActionFilter
                       rejects the supplied action/source/target tuple. */
  uVar1 = *(uint *)((int)this + 0x124);
  if (uVar1 < *(uint *)((int)this + 0x120)) {
    FUN_00d83c2d();
    action = extraout_EDX;
  }
  uVar4 = *(uint *)((int)this + 0x120);
  if (*(uint *)((int)this + 0x124) < uVar4) {
    FUN_00d83c2d();
    action = extraout_EDX_00;
  }
  while( true ) {
    if (this == (void *)0xfffffee4) {
      FUN_00d83c2d();
      action = extraout_EDX_01;
    }
    if (uVar4 == uVar1) {
      return true;
    }
    if (this == (void *)0xfffffee4) {
      FUN_00d83c2d();
      action = extraout_EDX_02;
    }
    if (*(uint *)((int)this + 0x124) <= uVar4) {
      FUN_00d83c2d();
      action = extraout_EDX_03;
    }
    uVar9 = 0;
    pTVar8 = &ValidActionFilter::RTTI_Type_Descriptor;
    pTVar7 = &PlayElement::RTTI_Type_Descriptor;
    uVar6 = 0;
    pvVar3 = find_play_element_in_maps(this,(int)action);
    uVar5 = FUN_00d8d382(pvVar3,uVar6,pTVar7,pTVar8,uVar9);
    action = (void *)((ulonglong)uVar5 >> 0x20);
    if (((void *)uVar5 != (void *)0x0) &&
       (bVar2 = Game_anyValidActionFilterRejects((void *)uVar5,in_stack_0000000c,source),
       action = extraout_EDX_04, bVar2)) break;
    if (*(uint *)((int)this + 0x124) <= uVar4) {
      FUN_00d83c2d();
      action = extraout_EDX_05;
    }
    uVar4 = uVar4 + 4;
  }
  return false;
}

