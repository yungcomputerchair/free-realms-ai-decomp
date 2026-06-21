// addr: 0x005fb98b
// name: StdVector16_clearAndReset
// subsystem: common/networking/userdata_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void StdVector16_clearAndReset(void * this) */

void __fastcall StdVector16_clearAndReset(void *this)

{
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
                    /* Clears/destroys a 16-byte-element vector and resets it through the vector
                       constructor path. Evidence: called by the assignment helper for an
                       empty/no-storage case and invokes cleanup on end and begin pointers. */
  FUN_005e2577(*(undefined4 *)((int)this + 8),this);
  FUN_005e2577(*(undefined4 *)((int)this + 4),this);
  FUN_005fa54f(&local_14,local_14,local_10,local_c,local_8);
  return;
}

