// addr: 0x014b8f90
// name: LoginCommand_GetChallenge_dtor_deleting
// subsystem: common/networking
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * LoginCommand_GetChallenge_dtor_deleting(void * this, char flags_) */

void * __thiscall LoginCommand_GetChallenge_dtor_deleting(void *this,char flags_)

{
                    /* Scalar deleting destructor wrapper for LoginCommand_GetChallenge; calls its
                       destructor and optionally frees this. */
  LoginCommand_GetChallenge_dtor(this);
  if ((flags_ & 1U) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}

