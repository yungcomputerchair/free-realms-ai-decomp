// addr: 0x013f7d70
// name: StateMachineState_setPhaseDialogFields
// subsystem: common/tcg/client
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void StateMachineState_setPhaseDialogFields(void * this, void * dialogId, void
   * sourceRef, void * line1, void * line2, void * line3, void * targetRef) */

void __thiscall
StateMachineState_setPhaseDialogFields
          (void *this,void *dialogId,void *sourceRef,void *line1,void *line2,void *line3,
          void *targetRef)

{
                    /* Stores phase dialog text/metadata: string at 0x5c, reference pairs at
                       0x7c/0x80 and 0x98/0x9c, and three strings at 0xb0/0xcc/0xe8. Called by
                       StateMachineState_setPhaseDialogForPlayer and
                       StateMachineState_setPhaseDialogForSource. */
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)((int)this + 0x5c),
             dialogId,0,0xffffffff);
  *(undefined4 *)((int)this + 0x7c) = *(undefined4 *)((int)sourceRef + 4);
  *(undefined4 *)((int)this + 0x80) = *(undefined4 *)((int)sourceRef + 8);
  MessageText_copyFrom((int)sourceRef + 0xc);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)((int)this + 0xb0),
             line1,0,0xffffffff);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)((int)this + 0xcc),
             line2,0,0xffffffff);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)((int)this + 0xe8),
             line3,0,0xffffffff);
  *(undefined4 *)((int)this + 0x98) = *(undefined4 *)((int)targetRef + 4);
  *(undefined4 *)((int)this + 0x9c) = *(undefined4 *)((int)targetRef + 8);
  MessageText_copyFrom((int)targetRef + 0xc);
  return;
}

