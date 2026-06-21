// addr: 0x014890b0
// name: GetPropertyNode_evaluate
// subsystem: common/common/rules
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Removing unreachable block (ram,0x014891b1) */
/* WARNING: Removing unreachable block (ram,0x014891d8) */
/* Setting prototype: bool GetPropertyNode_evaluate(void * this, void * result) */

bool __thiscall GetPropertyNode_evaluate(void *this,void *result)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  int *element;
  undefined4 uVar4;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *pbVar5;
  void *pvVar6;
  void *pvStack_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* Evaluates a getProperty node by resolving its target card, handling special
                       keys such as Title and Card Count, otherwise reading a numeric Card property.
                       Stores the resulting string or integer and logs 'Value:'. */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_016a1788;
  local_c = ExceptionList;
  uVar2 = DAT_01b839d8 ^ (uint)&stack0xffffffd4;
  ExceptionList = &local_c;
  EvaluationEnvironment_tracef(result,"getProperty %d",*(undefined4 *)((int)this + 0x1c));
  pvVar6 = result;
  piVar3 = (int *)(**(code **)(*(int *)this + 0x54))(result,uVar2);
  element = (int *)FUN_00d8d382(piVar3,0,&PlayElement::RTTI_Type_Descriptor,
                                &Card::RTTI_Type_Descriptor,0);
  iVar1 = *(int *)((int)this + 0x1c);
  if (iVar1 == 1) {
    EvaluationEnvironment_tracef(result,"Title",pvVar6);
    if (element != (int *)0x0) {
      pbVar5 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
               Card_getPropertyMap();
      FUN_01300680(3);
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
                (*(basic_string<char,std::char_traits<char>,std::allocator<char>_> **)
                  ((int)result + 8),pbVar5,0,0xffffffff);
    }
  }
  else if (iVar1 == 0x2be) {
    EvaluationEnvironment_tracef(result,"Card Count Key %p",piVar3);
    if (piVar3 != (int *)0x0) {
      uVar4 = PlayElement_getId();
      EvaluationEnvironment_tracef(result,"pile ID: %d",uVar4);
      puStack_8 = (undefined1 *)0x0;
      (**(code **)(*piVar3 + 0x34))(&stack0xffffffe0);
      FUN_01300680(2);
      *(undefined4 *)((int)result + 8) = 0;
      puStack_8 = (undefined1 *)0xffffffff;
    }
  }
  else if (element != (int *)0x0) {
    uVar4 = (**(code **)(*element + 0x15c))(iVar1,result);
    FUN_01300680(2);
    *(undefined4 *)((int)result + 8) = uVar4;
  }
  if (*(int *)((int)result + 4) == 5) {
    pvVar6 = EvaluationEnvironment_getOriginCard(result);
    set_play_element_id_field(result,element);
    FUN_01301590(result);
    set_play_element_id_field(result,pvVar6);
  }
  EvaluationEnvironment_tracefWithPrefix(result,"Value: ");
  ExceptionList = pvStack_10;
  return true;
}

