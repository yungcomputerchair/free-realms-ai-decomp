// addr: 0x0150f8a0
// name: CommandObject_ValidAttrMod_doCommand
// subsystem: common/common/rules
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool CommandObject_ValidAttrMod_doCommand(void * this) */

bool __fastcall CommandObject_ValidAttrMod_doCommand(void *this)

{
  bool bVar1;
  void *card;
  void *pvVar2;
  int *piVar3;
  void *this_00;
  undefined4 uVar4;
  TypeDescriptor *pTVar5;
  TypeDescriptor *pTVar6;
  undefined4 uVar7;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Applies a valid-attribute-mod filter object to the current target Card:
                       allocates the filter, fills it from command fields including source/dynamic
                       card data, destroys a stored expression tree value, and invokes the Card
                       virtual apply method. Returns false if the target is not a Card. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016b667b;
  local_c = ExceptionList;
  card = (void *)(DAT_01b839d8 ^ (uint)&stack0xffffffe0);
  ExceptionList = &local_c;
  this_00 = (void *)0x0;
  uVar7 = 0;
  pTVar6 = &Card::RTTI_Type_Descriptor;
  pTVar5 = &PlayElement::RTTI_Type_Descriptor;
  uVar4 = 0;
  pvVar2 = EvaluationEnvironment_resolveTarget((void *)((int)this + 0x84));
  piVar3 = (int *)FUN_00d8d382(pvVar2,uVar4,pTVar5,pTVar6,uVar7);
  if (piVar3 == (int *)0x0) {
    bVar1 = false;
  }
  else {
    pvVar2 = Mem_Alloc(0x60);
    local_4 = 0;
    if (pvVar2 != (void *)0x0) {
      this_00 = ValidAttrModFilter_ctor(pvVar2);
    }
    local_4 = 0xffffffff;
    FUN_01340230(this_00,*(void **)((int)this + 0x30),(int)card);
    ValidAttrModFilter_setAttributeId(this_00,*(void **)((int)this + 0x130),(int)card);
    ValidAttrModFilter_destroyExpressionTreeValue((void *)((int)this + 0x124));
    pvVar2 = EvaluationEnvironment_getOriginCard((void *)((int)this + 0x84));
    ValidAttrModFilter_setSourceCard(this_00,pvVar2,card);
    pvVar2 = (void *)Rules_getDynamicCardReturnCard();
    ValidAttrModFilter_setTargetCard(this_00,pvVar2,card);
    (**(code **)(*piVar3 + 0x1d8))(this_00);
    bVar1 = true;
  }
  ExceptionList = local_c;
  return bVar1;
}

