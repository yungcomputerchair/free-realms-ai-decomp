// addr: 0x013f7cd0
// name: FUN_013f7cd0
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __thiscall
FUN_013f7cd0(void *param_1,
            basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_2,
            int param_3,
            basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_4,
            basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_5,
            int param_6)

{
                    /* Generic container/game/deserializer helper with insufficient class evidence;
                       code performs tree/vector manipulation, value serialization, or broad game
                       utility work rather than a clearly named state method. */
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             ((int)param_1 + 0x130),param_2,0,0xffffffff);
  *(undefined4 *)((int)param_1 + 0x150) = *(undefined4 *)(param_3 + 4);
  *(undefined4 *)((int)param_1 + 0x154) = *(undefined4 *)(param_3 + 8);
  MessageText_copyFrom(param_3 + 0xc);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             ((int)param_1 + 0x184),param_4,0,0xffffffff);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             ((int)param_1 + 0x1a0),param_5,0,0xffffffff);
  *(undefined4 *)((int)param_1 + 0x16c) = *(undefined4 *)(param_6 + 4);
  *(undefined4 *)((int)param_1 + 0x170) = *(undefined4 *)(param_6 + 8);
  MessageText_copyFrom(param_6 + 0xc);
  StateMachine_dispatchQueuedAction(param_1);
  return;
}

