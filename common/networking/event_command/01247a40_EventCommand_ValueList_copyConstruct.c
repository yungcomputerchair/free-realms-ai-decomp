// addr: 0x01247a40
// name: EventCommand_ValueList_copyConstruct
// subsystem: common/networking/event_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: undefined4 EventCommand_ValueList_copyConstruct(void * this, void * source) */

void * __thiscall EventCommand_ValueList_copyConstruct(void *this,void *source)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Copy-constructs a small contained value/list object by wrapping a call to
                       FUN_012477e0 and returning the destination pointer. It is used by several
                       event-command cloneInto routines for collection members. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01655b48;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_012477e0(source);
  ExceptionList = local_c;
  return this;
}

