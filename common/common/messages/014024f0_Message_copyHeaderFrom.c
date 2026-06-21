// addr: 0x014024f0
// name: Message_copyHeaderFrom
// subsystem: common/common/messages
// source (binary assert): common/common/messages/Message.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void Message_copyHeaderFrom(void * this, void * message) */

void __thiscall Message_copyHeaderFrom(void *this,void *message)

{
                    /* Copies the base message scalar fields from another message and
                       releases/clears the string/vector-like member at offset 0xc. It asserts the
                       source 'message' pointer is non-null. */
  if (message == (void *)0x0) {
    FUN_012f5a60("message","..\\common\\common\\messages\\Message.cpp",0x82);
  }
  *(undefined4 *)((int)this + 4) = *(undefined4 *)((int)message + 4);
  *(undefined4 *)((int)this + 8) = *(undefined4 *)((int)message + 8);
  MessageText_copyFrom((int)message + 0xc);
  return;
}

