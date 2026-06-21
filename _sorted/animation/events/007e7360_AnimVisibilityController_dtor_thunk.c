// addr: 0x007e7360
// name: AnimVisibilityController_dtor_thunk
// subsystem: common/animation/events
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void * __thiscall AnimVisibilityController_dtor_thunk(void *param_1,byte param_2)

{
                    /* Deleting-destructor thunk for AnimVisibilityController; runs the destructor
                       and frees this when the low flag bit is set. */
  AnimVisibilityController_dtor(param_1);
  if ((param_2 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(param_1);
  }
  return param_1;
}

