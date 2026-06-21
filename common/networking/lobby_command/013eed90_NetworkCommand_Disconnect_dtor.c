// addr: 0x013eed90
// name: NetworkCommand_Disconnect_dtor
// subsystem: common/networking/lobby_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void NetworkCommand_Disconnect_dtor(void * this) */

void __fastcall NetworkCommand_Disconnect_dtor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Destructor for NetworkCommand_Disconnect: installs the derived vtable,
                       releases its owned std::string, and calls the NetworkCommand base destructor.
                       Evidence is NetworkCommand_Disconnect::vftable. */
  puStack_8 = &LAB_0168efe3;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = NetworkCommand_Disconnect::vftable;
  local_4 = 0;
  if (0xf < *(uint *)((int)this + 0x1c)) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)this + 8));
  }
  *(undefined4 *)((int)this + 0x1c) = 0xf;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined1 *)((int)this + 8) = 0;
  local_4 = 0xffffffff;
  NetworkCommand_dtor(this);
  ExceptionList = local_c;
  return;
}

