// addr: 0x01532120
// name: ValueData_constructIfNonNull
// subsystem: common/networking/event_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void ValueData_constructIfNonNull(void * dest, void * source) */

void __cdecl ValueData_constructIfNonNull(void *dest,void *source)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Placement-copy-construct helper for a 12-byte ValueData-like element: if the
                       destination pointer is non-null, it invokes the ValueData copy constructor
                       wrapper. Used by vector/range construction helpers in this event-command
                       area. */
  puStack_8 = &LAB_016bb6b1;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 0;
  if (dest != (void *)0x0) {
    ValueData_IntIntMap_copyConstruct(dest,source);
  }
  ExceptionList = local_c;
  return;
}

