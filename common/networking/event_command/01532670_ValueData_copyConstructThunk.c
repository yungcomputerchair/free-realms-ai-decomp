// addr: 0x01532670
// name: ValueData_copyConstructThunk
// subsystem: common/networking/event_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void ValueData_copyConstructThunk(void * dest, void * source) */

void ValueData_copyConstructThunk(void *dest,void *source)

{
                    /* Thin thunk around ValueData_constructIfNonNull. The surrounding helpers
                       advance by 0xc bytes, matching the copied ValueData-like element size. */
  ValueData_constructIfNonNull(dest,source);
  return;
}

