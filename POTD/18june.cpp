class Solution {
  public:
    int distributeTicket(int totalTickets, int groupSize) {
        int quotient = totalTickets / groupSize;
        int ticketIndex;
        if (quotient % 2 == 1) {
            ticketIndex = ((quotient / 2) + 1) * groupSize;
            
            if (totalTickets % groupSize == 0) return ticketIndex;
            else return ticketIndex + 1;
        }
        else {
            ticketIndex = (totalTickets + 1) - (quotient / 2) * groupSize;
            
            if (totalTickets % groupSize == 0) return ticketIndex;
            else return ticketIndex - 1;
        }
    }
};
