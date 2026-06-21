// addr: 0x013ef620
// name: Exception_assign
// subsystem: common/networking/game_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void Exception_assign(void * this, void * other) */

void __thiscall Exception_assign(void *this,void *other)

{
                    /* Copies Exception fields: message, source file, detail string, player id, and
                       fatal flag. Evidence is the Exception layout from the ctor and
                       GameCommandFatalError clone copying its embedded Exception object. */
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)((int)this + 4),
             (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             ((int)other + 4),0,0xffffffff);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)((int)this + 0x20),
             (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             ((int)other + 0x20),0,0xffffffff);
  *(undefined4 *)((int)this + 0x3c) = *(undefined4 *)((int)other + 0x3c);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)((int)this + 0x40),
             (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             ((int)other + 0x40),0,0xffffffff);
  *(undefined4 *)((int)this + 0x5c) = *(undefined4 *)((int)other + 0x5c);
  *(undefined1 *)((int)this + 0x60) = *(undefined1 *)((int)other + 0x60);
  return;
}

