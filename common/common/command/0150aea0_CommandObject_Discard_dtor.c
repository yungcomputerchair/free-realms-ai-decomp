// addr: 0x0150aea0
// name: CommandObject_Discard_dtor
// subsystem: common/common/command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void CommandObject_Discard_dtor(void * this) */

void __fastcall CommandObject_Discard_dtor(void *this)

{
  uint uVar1;
  uint uVar2;
  void *pvVar3;
  int in_EDX;
  int extraout_EDX;
  int extraout_EDX_00;
  int extraout_EDX_01;
  int extraout_EDX_02;
  int extraout_EDX_03;
  int extraout_EDX_04;
  int extraout_EDX_05;
  uint uVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  TypeDescriptor *pTVar7;
  TypeDescriptor *pTVar8;
  undefined4 uVar9;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
                    /* Destructor for CommandObject_Discard: destroys every owned child
                       CommandObject in its vector at fields +0x130..+0x138, frees the vector, It
                       then chains to the CommandObject base destructor. */
  puStack_8 = &LAB_016b5a96;
  local_c = ExceptionList;
  uVar2 = DAT_01b839d8 ^ (uint)&stack0xffffffdc;
  ExceptionList = &local_c;
  *(undefined ***)this = CommandObject_Discard::vftable;
  *(undefined ***)((int)this + 8) = CommandObject_Discard::vftable;
  local_4 = 1;
  uVar1 = *(uint *)((int)this + 0x134);
  if (uVar1 < *(uint *)((int)this + 0x130)) {
    FUN_00d83c2d(uVar2);
    in_EDX = extraout_EDX;
  }
  uVar4 = *(uint *)((int)this + 0x130);
  if (*(uint *)((int)this + 0x134) < uVar4) {
    FUN_00d83c2d(uVar2);
    in_EDX = extraout_EDX_00;
  }
  while( true ) {
    if (this == (void *)0xfffffed4) {
      FUN_00d83c2d(uVar2);
      in_EDX = extraout_EDX_01;
    }
    if (uVar4 == uVar1) break;
    if (this == (void *)0xfffffed4) {
      FUN_00d83c2d(uVar2);
      in_EDX = extraout_EDX_02;
    }
    if (*(uint *)((int)this + 0x134) <= uVar4) {
      FUN_00d83c2d(uVar2);
      in_EDX = extraout_EDX_03;
    }
    uVar9 = 0;
    pTVar8 = &CommandObject::RTTI_Type_Descriptor;
    pTVar7 = &PlayElement::RTTI_Type_Descriptor;
    uVar6 = 0;
    pvVar3 = find_play_element_in_maps(*(void **)((int)this + 0x30),in_EDX);
    uVar5 = FUN_00d8d382(pvVar3,uVar6,pTVar7,pTVar8,uVar9);
    in_EDX = (int)((ulonglong)uVar5 >> 0x20);
    if ((undefined4 *)uVar5 != (undefined4 *)0x0) {
      (**(code **)*(undefined4 *)uVar5)(1);
      in_EDX = extraout_EDX_04;
    }
    if (*(uint *)((int)this + 0x134) <= uVar4) {
      FUN_00d83c2d();
      in_EDX = extraout_EDX_05;
    }
    uVar4 = uVar4 + 4;
  }
  local_4 = local_4 & 0xffffff00;
  if (*(void **)((int)this + 0x130) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)this + 0x130));
  }
  *(undefined4 *)((int)this + 0x130) = 0;
  *(undefined4 *)((int)this + 0x134) = 0;
  *(undefined4 *)((int)this + 0x138) = 0;
  local_4 = 0xffffffff;
  CommandObject_dtor(this);
  ExceptionList = local_c;
  return;
}

