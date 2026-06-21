// addr: 0x012f0560
// name: VirtualObject_deleteIfNotNull
// subsystem: common/networking/lobby_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int VirtualObject_deleteIfNotNull(void * obj) */

int __fastcall VirtualObject_deleteIfNotNull(void *obj)

{
  undefined4 in_EAX;
  
                    /* If the object pointer is non-null, invokes its first virtual function with
                       delete flag 1, then returns 1. */
  if (obj != (void *)0x0) {
    in_EAX = (*(code *)**(undefined4 **)obj)(1);
  }
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}

