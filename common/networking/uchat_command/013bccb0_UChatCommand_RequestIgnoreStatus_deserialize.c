// addr: 0x013bccb0
// name: UChatCommand_RequestIgnoreStatus_deserialize
// subsystem: common/networking/uchat_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int UChatCommand_RequestIgnoreStatus_deserialize(void * this, void * stream)
    */

int __thiscall UChatCommand_RequestIgnoreStatus_deserialize(void *this,void *stream)

{
  uint uVar1;
  int iVar2;
  void *local_4;
  
                    /* Deserializes RequestIgnoreStatus by bracketing the stream, reading inherited
                       UChatCommand fields, deserializing the int-vector payload, and closing the
                       stream section. */
  local_4 = this;
  uVar1 = (**(code **)(*(int *)this + 0x10))(stream,&local_4);
  if ((char)uVar1 != '\0') {
    uVar1 = FUN_013bcf60(stream);
    if ((char)uVar1 != '\0') {
      local_4 = stream;
      uVar1 = FUN_013bcba0((int)this + 0x44);
      if ((char)uVar1 != '\0') {
        iVar2 = (**(code **)(*(int *)this + 0x14))(stream);
        return iVar2;
      }
    }
  }
  return uVar1 & 0xffffff00;
}

