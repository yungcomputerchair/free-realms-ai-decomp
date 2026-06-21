// addr: 0x01344d10
// name: PlayElement_dtor
// subsystem: common/common/command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void PlayElement_dtor(void * this) */

void __fastcall PlayElement_dtor(void *this)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  void *this_00;
  void *target;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Destructor for PlayElement: installs PlayElement vftables, detaches
                       parent/relationship state, frees a vector at +0x20, destroys keyword/map
                       state, and then tears down PersistentComponent/PersistentBase bases. */
  puStack_8 = &LAB_0167cc0d;
  local_c = ExceptionList;
  uVar2 = DAT_01b839d8 ^ (uint)&stack0xffffffe0;
  ExceptionList = &local_c;
  puVar1 = (undefined4 *)((int)this + 8);
  *(undefined ***)this = PlayElement::vftable;
  *puVar1 = PlayElement::vftable;
  local_4 = 3;
  if (*(int *)((int)this + 0x30) != 0) {
    FUN_01357960(*(undefined4 *)((int)this + 0x34));
  }
  iVar3 = (**(code **)(*(int *)this + 0x30))(uVar2);
  if (iVar3 != 0) {
    target = this;
    this_00 = (void *)(**(code **)(*(int *)this + 0x30))();
    PlayElement_copyKeywordMapTo(this_00,target);
  }
  local_4 = CONCAT31(local_4._1_3_,2);
  if (*(void **)((int)this + 0x20) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)this + 0x20));
  }
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  local_4 = CONCAT31(local_4._1_3_,1);
  FUN_013439e0();
  *puVar1 = PersistentComponent::vftable;
  *puVar1 = PersistentBase::vftable;
  local_4 = 0xffffffff;
  HasProperties_sub_01424160();
  ExceptionList = local_c;
  return;
}

