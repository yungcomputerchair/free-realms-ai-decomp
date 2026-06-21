// addr: 0x013fa5d0
// name: StateMachineState_getPhaseDialogText
// subsystem: common/tcg/client
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * StateMachineState_getPhaseDialogText(void * this, void * out) */

void * __thiscall StateMachineState_getPhaseDialogText(void *this,void *out)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Copies the string at offset 0x8c into out. Caller
                       StateMachineState_setPhaseDialogForPlayer suggests this is phase dialog text
                       used for a player/state update. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0168fb29;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined4 *)((int)out + 0x18) = 0xf;
  *(undefined4 *)((int)out + 0x14) = 0;
  *(undefined1 *)((int)out + 4) = 0;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            (out,(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                 ((int)this + 0x8c),0,0xffffffff);
  ExceptionList = local_c;
  return out;
}

