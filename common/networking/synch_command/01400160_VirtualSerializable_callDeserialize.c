// addr: 0x01400160
// name: VirtualSerializable_callDeserialize
// subsystem: common/networking/synch_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int VirtualSerializable_callDeserialize(void * stream, void * object) */

int __cdecl VirtualSerializable_callDeserialize(void *stream,void *object)

{
  int iVar1;
  
                    /* Thin virtual dispatch helper that invokes the vtable slot at +0x24 on object,
                       passing the stream/context argument. It is used in a loop that reads
                       serialized elements and tests the returned boolean. */
  iVar1 = (**(code **)(*(int *)object + 0x24))(stream);
  return iVar1;
}

