// addr: 0x01362c20
// name: GameCommandStateList_dtor
// subsystem: common/networking/game_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void * __thiscall GameCommandStateList_dtor(int param_1,void *param_2)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Destroys a state/list-like subobject by calling a destructor at offset 0x248
                       and returns the supplied value. It appears in GameCommand initialization/copy
                       setup for the state list at command offset 0x18. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0167f2c9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  ValueData_IntIntMap_copyConstruct(param_2,(void *)(param_1 + 0x248));
  ExceptionList = local_c;
  return param_2;
}

