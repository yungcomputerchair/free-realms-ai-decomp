// addr: 0x014a2cb0
// name: PickListNode_emitCommand
// subsystem: common/common/rules
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool PickListNode_emitCommand(void * this, void * trace) */

bool __thiscall PickListNode_emitCommand(void *this,void *trace)

{
  void *commandObject;
  void *this_00;
  void *pvVar1;
  void *sourceMap;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
                    /* Creates and enqueues a CommandObject_PickList for a pick-list rule node.
                       Evidence is the log 'Adding a PickList command' and construction call to
                       CommandObject_PickList_ctor. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016a4753;
  local_c = ExceptionList;
  commandObject = (void *)(DAT_01b839d8 ^ (uint)&stack0xffffffe4);
  ExceptionList = &local_c;
  pvVar1 = trace;
  EvaluationEnvironment_tracef(trace,"Adding a PickList command",commandObject);
  sourceMap = (void *)0x124;
  this_00 = Mem_Alloc(0x124);
  local_4 = 0;
  if (this_00 == (void *)0x0) {
    pvVar1 = (void *)0x0;
  }
  else {
    IntPointerMap_copyCtorWrapper(&stack0xffffffd4,(int)this + 4,sourceMap);
    local_4 = local_4 & 0xffffff00;
    pvVar1 = CommandObject_PickList_ctor(this_00,trace,sourceMap,pvVar1);
  }
  local_4 = 0xffffffff;
  EvaluationEnvironment_addCommandObject(trace,pvVar1,commandObject);
  ExceptionList = local_c;
  return true;
}

