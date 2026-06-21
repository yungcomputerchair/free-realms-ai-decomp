// addr: 0x01246cb0
// name: ValueData_IntIntMap_copyConstruct
// subsystem: common/networking/event_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: undefined4 ValueData_IntIntMap_copyConstruct(void * this, void * source) */

void * __thiscall ValueData_IntIntMap_copyConstruct(void *this,void *source)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Copy-constructs a contained int-int map/value object by wrapping FUN_01244860
                       and returning the destination pointer. It is reused by event-command
                       collection members. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01655938;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_01244860(source);
  ExceptionList = local_c;
  return this;
}

