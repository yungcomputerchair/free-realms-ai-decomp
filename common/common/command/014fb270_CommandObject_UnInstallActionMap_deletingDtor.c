// addr: 0x014fb270
// name: CommandObject_UnInstallActionMap_deletingDtor
// subsystem: common/common/command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * CommandObject_UnInstallActionMap_deletingDtor(void * this, char flags_)
    */

void * __thiscall CommandObject_UnInstallActionMap_deletingDtor(void *this,char flags_)

{
                    /* Scalar deleting destructor for CommandObject_UnInstallActionMap: calls the
                       class destructor and conditionally frees the object. */
  CommandObject_UnInstallActionMap_dtor(this);
  if ((flags_ & 1U) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}

