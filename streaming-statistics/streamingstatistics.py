import sys
class Song(object):

    def __init__(self, end_time, play_time, kilobits):
        self.end_time = end_time
        self.play_time = play_time
        self.kilobits = kilobits
        self.start_time = end_time - play_time

    def calculateBitsForTimeInterval(self, interval_start, interval_end):
        if(interval_start <= self.start_time and interval_end <= self.end_time):
            total_play_time = interval_end - self.start_time
            total_kilobits = total_play_time * self.kilobits
            total_bits = total_kilobits / 1000
            return total_bits
        elif(interval_start <= self.start_time and interval_end >= self.end_time):
            total_kilobits = self.play_time * self.kilobits
            total_bits = total_kilobits / 1000 
            return total_bits
        elif(interval_start >= self.start_time and interval_end <= self.end_time):
            total_play_time = interval_end - interval_start
            total_kilobits = total_play_time * self.kilobits
            total_bits = total_kilobits / 1000
            return total_bits
        else:
            total_play_time = self.end_time - interval_start
            total_kilobits = total_play_time * self.kilobits
            total_bits = total_kilobits / 1000
            return total_bits

def calculationForQuery(songs, interval_start, interval_end):
    total = 0
    firstSongFound = False 
    lastSongFound = False
    for song in songs:
        if(interval_start <= song.end_time and song.start_time <= interval_end):
            firstSongFound = True
            total += song.calculateBitsForTimeInterval(interval_start, interval_end)
        else: 
            if(firstSongFound):
                lastSongFound = True
        if(lastSongFound):
            break
    x = '{0:.3f}'.format(total)
    print(x)


def main():
    songs = []
    number_of_entries = int(sys.stdin.readline())
    for i in range(0, number_of_entries):
        line = sys.stdin.readline()
        line_as_list = line.split(" ")
        end = float(line_as_list[0])
        total_time = float(line_as_list[1])
        kilobits = float(line_as_list[2])
        song = Song(end, total_time, kilobits)
        songs.append(song)
    number_of_queries = int(sys.stdin.readline())
    songs.sort(key=lambda song:song.end_time)
    for i in range(0, number_of_queries):
        line = sys.stdin.readline()
        line_as_list = line.split(" ")
        start = float(line_as_list[0])
        end = float(line_as_list[1])
        calculationForQuery(songs, start, end)

if __name__ == '__main__':
    main()