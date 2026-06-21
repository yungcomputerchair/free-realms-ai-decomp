// addr: 0x012dbbf0
// name: DeckBuilderUtilities_getInstance
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void DeckBuilderUtilities_getInstance(void) */

void DeckBuilderUtilities_getInstance(void)

{
  void *this;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Lazily allocates and constructs the global DeckBuilderUtilities singleton.
                       The constructor callee installs DeckBuilderUtilities::vftable. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0167114b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (DAT_01cbd6a8 == (void *)0x0) {
    this = Mem_Alloc(0x5c);
    local_4 = 0;
    if (this == (void *)0x0) {
      DAT_01cbd6a8 = (void *)0x0;
    }
    else {
      DAT_01cbd6a8 = DeckBuilderUtilities_ctor(this);
    }
  }
  ExceptionList = local_c;
  return;
}

