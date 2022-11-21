
void main(void)

{
  long in_FS_OFFSET; //오프셋 
  uint local_1c;
  uint local_18;
  uint local_14;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  setup();
  banner();
  puts("-------=[ BAD INTEGERS ]=-------");
  puts("|-< Enter two numbers to add >-|\n"); 
  printf("]>> ");
  __isoc99_scanf(&DAT_0010216f,&local_1c); // scanf 
  printf("]>> ");
  __isoc99_scanf(&DAT_0010216f,&local_18);
  local_14 = local_18 + local_1c;        //local_14는 근데 local_18 + local_1c인데? 
  if (((int)local_1c < 0) || ((int)local_18 < 0)) {
    printf("\n[o.O] Hmmm... that was a Good try!\n",(ulong)local_1c,(ulong)local_18,(ulong)local_ 14)
    ;   //아 근데 음수는 못 넣게 해놨네? 각 수가 음수가 아닌데 local_14 자체는 음수로 만들어야 한다는 거네 
  }
  else if ((int)local_14 < 0) {         //local_14를 조작한다는 것 
    printf("\n[*] C: %d",(ulong)local_14);
    puts("\n[*] Popped Shell\n[*] Switching to interactive mode");
    system("/bin/sh");
  }
  else {
    printf("\n[*] ADDING %d + %d",(ulong)local_1c,(ulong)local_18);
    printf("\n[*] RESULT: %d\n",(ulong)local_14);
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}
