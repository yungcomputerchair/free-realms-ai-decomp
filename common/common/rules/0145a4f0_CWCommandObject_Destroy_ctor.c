// addr: 0x0145a4f0
// name: CWCommandObject_Destroy_ctor
// subsystem: common/common/rules
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * CWCommandObject_Destroy_ctor(void * this, void * environment) */

void * __thiscall CWCommandObject_Destroy_ctor(void *this,void *environment)

{
  char cVar1;
  uint uVar2;
  void *pvVar3;
  int iVar4;
  void *pvVar5;
  int *piVar6;
  undefined4 uVar7;
  TypeDescriptor *pTVar8;
  TypeDescriptor *pTVar9;
  undefined4 uVar10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs CWCommandObject_Destroy, initializes CommandObject fields, records
                       last-action-source/owner information when available, and clears optional
                       fields if the target CWCard cannot be destroyed. Logs when forced to use
                       kLastActionSourceEvalKey. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0169c8a8;
  local_c = ExceptionList;
  uVar2 = DAT_01b839d8 ^ (uint)&stack0xffffffe0;
  ExceptionList = &local_c;
  CommandObject_ctor(this,environment);
  local_4 = 0;
  *(undefined ***)this = CWCommandObject_Destroy::vftable;
  *(undefined ***)((int)this + 8) = CWCommandObject_Destroy::vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)((int)this + 0x48),
             "CWCommandObject_Destroy",0x17);
  pvVar5 = (void *)((int)this + 0x84);
  *(undefined4 *)((int)this + 0x74) = 0;
  *(undefined4 *)((int)this + 0x7c) = 0;
  pvVar3 = EvaluationEnvironment_getOriginCard(pvVar5);
  if (pvVar3 != (void *)0x0) {
    Game_logGeneral(*(void **)((int)this + 0x30),
                    "CWCommandObject_Destroy: Forced to go to kLastActionSourceEvalKey",uVar2);
    EvaluationEnvironment_getOriginCard(pvVar5);
    iVar4 = PlayElement_getId();
    set_integer_value_for_key(0x33,iVar4);
  }
  uVar10 = 0;
  pTVar9 = &CWCard::RTTI_Type_Descriptor;
  pTVar8 = &PlayElement::RTTI_Type_Descriptor;
  uVar7 = 0;
  pvVar5 = EvaluationEnvironment_resolveTarget(pvVar5);
  piVar6 = (int *)FUN_00d8d382(pvVar5,uVar7,pTVar8,pTVar9,uVar10);
  if (piVar6 != (int *)0x0) {
    iVar4 = PlayElement_getId();
    set_integer_value_for_key(0x34,iVar4);
    cVar1 = (**(code **)(*piVar6 + 0x48))();
    if (cVar1 == '\0') {
      *(undefined4 *)((int)this + 0x74) = 0;
      *(undefined4 *)((int)this + 0x7c) = 0;
    }
  }
  ExceptionList = local_c;
  return this;
}

