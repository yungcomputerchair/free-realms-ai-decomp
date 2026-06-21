// addr: 0x0149f7a0
// name: ActionTargetList_applyToTurnProperties
// subsystem: common/common/rules
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool ActionTargetList_applyToTurnProperties(void * this, void * trace) */

bool __thiscall ActionTargetList_applyToTurnProperties(void *this,void *trace)

{
  int iVar1;
  undefined4 *puVar2;
  void *commandObject;
  void *pvVar3;
  void *env;
  int local_1c;
  undefined4 *local_18;
  undefined4 *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Handles the 'target == turn properties' case by iterating stored child action
                       entries, constructing a command object for each entry, adding it to the
                       command stream, and returning true. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016a429b;
  local_c = ExceptionList;
  commandObject = (void *)(DAT_01b839d8 ^ (uint)&stack0xffffffd0);
  ExceptionList = &local_c;
  EvaluationEnvironment_tracef(trace,"target == turn properties",commandObject);
  local_10 = *(undefined4 **)((int)this + 8);
  local_18 = (undefined4 *)*local_10;
  local_1c = (int)this + 4;
  while( true ) {
    puVar2 = local_18;
    iVar1 = local_1c;
    if ((local_1c == 0) || (local_1c != (int)this + 4)) {
      FUN_00d83c2d();
    }
    if (puVar2 == local_10) break;
    pvVar3 = Mem_Alloc(0x138);
    env = (void *)0x0;
    local_4 = 0;
    if (pvVar3 != (void *)0x0) {
      if (iVar1 == 0) {
        FUN_00d83c2d();
      }
      if (puVar2 == *(undefined4 **)(iVar1 + 4)) {
        FUN_00d83c2d();
        if (puVar2 == *(undefined4 **)(iVar1 + 4)) {
          FUN_00d83c2d();
        }
      }
      env = (void *)CommandObject_GameProperties_ctor(puVar2[3],puVar2[4],trace);
    }
    local_4 = 0xffffffff;
    EvaluationEnvironment_addCommandObject(trace,env,commandObject);
    STLMapIterator_next(&local_1c);
  }
  ExceptionList = local_c;
  return true;
}

