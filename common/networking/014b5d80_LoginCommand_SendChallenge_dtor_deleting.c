// addr: 0x014b5d80
// name: LoginCommand_SendChallenge_dtor_deleting
// subsystem: common/networking
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * LoginCommand_SendChallenge_dtor_deleting(void * this, char flags_) */

void * __thiscall LoginCommand_SendChallenge_dtor_deleting(void *this,char flags_)

{
                    /* Scalar deleting destructor wrapper for LoginCommand_SendChallenge; calls its
                       destructor and optionally frees this. */
  LoginCommand_SendChallenge_dtor(this);
  if ((flags_ & 1U) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}

